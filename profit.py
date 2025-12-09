import numpy as np
import matplotlib.pyplot as plt
import yfinance as yf
import subprocess
import os

# access memory folder

mem_folder = "memory"



# Parameters
symbol = input("Enter stock you want ")           # Stock symbol (e.g. AAPL, TSLA, NVDA)
period = "7d"             # Time period: "1mo", "3mo", "1y", etc.
interval = "1m"            # Interval: "1h", "1d", "5m", etc.
output_file = os.path.join(mem_folder, "stock.mem") # Output memory file name


# get stock data
data = yf.download(symbol, period=period, interval=interval, progress=False)
prices = data["Close"].values


# want to change this to do more bits later 32 seems good a range from 0-4 billion
# but for now 8 bits is easier to handle in verilog
# We are also using fixed point here as our hardware can't handle floating point

# Normalise to 0–255 (8-bit range)
min_val, max_val = np.min(prices), np.max(prices)
print(f"Real min price: {min_val}, Real max price: {max_val}")

normalized = ((prices - min_val) / (max_val - min_val) * 255).astype(int)

# Write to memory file
with open(output_file, "w") as f:
    for i, val in enumerate(normalized):
        val = int(val)  # <-- convert to plain int to avoid numpy formatting issue
        if (i + 1) % 16 == 0:
            f.write("{:02X}\n".format(val))
        else:
            f.write("{:02X} ".format(val))

print(f"✅ Stock data for {symbol} written to '{output_file}' with {len(normalized)} samples.")


plt.figure(figsize=(12, 5))
plt.plot(prices, label=f"{symbol} Close Price")
plt.title(f"{symbol} Stock Data ({period}, {interval})")
plt.xlabel("Sample")
plt.ylabel("Price (USD)")
plt.grid(True)
plt.legend()
plt.show()

# old fin.py just storing the stock prices in a mem file

# next we will run the c++ tst bench code through python
# when coming up with new strategies just comment out this code and run the new strategy to generate new mem files

# get verilator to compile the rtl code and the test bench

module = "top_TLU"  # top-level module name
subprocess.run([
    "wsl", "verilator", "--cc", f"{module}.sv",
    "--exe", f"../tb/{module}_tb.cpp",
    ], check=True, cwd= "rtl")

# make file

subprocess.run([
    "wsl", "make", "-j","-C", "obj_dir/", "-f", f"V{module}.mk",f"V{module}"
    ], check=True, cwd = "rtl")

# execute the compiled test bench
subprocess.run(["wsl",f"./obj_dir/V{module}"
                ], check=True, cwd = "rtl")



# Parameters

stock_file = os.path.join(mem_folder, "stock.mem")
buy_file = os.path.join(mem_folder, "buy_signal.mem")
sell_file = os.path.join(mem_folder, "sell_signal.mem")

# Stock symbol (must match stock.mem)
units_per_trade = 1    # units bought/sold per signal
max_units_budget = 1     # maximum units you can hold at any time


# Function to load memory file

def load_mem_file(filename):
    """Load a hex memory file and return values as integers"""
    hex_values = []
    with open(filename, "r") as f:
        for line in f:
            values = [v for v in line.strip().split() if v]
            hex_values.extend(values)
    arr = np.array([int(h, 16) for h in hex_values])
    return arr






# Load data from memory files

prices_raw = load_mem_file(stock_file)
buy_signals = load_mem_file(buy_file)
sell_signals = load_mem_file(sell_file)

# Convert 8-bit 0-255 to actual stock price
prices = min_val + (prices_raw / 255.0) * (max_val - min_val)

# Ensure arrays are same length
min_len = min(len(prices), len(buy_signals), len(sell_signals))
prices = prices[:min_len]
buy_signals = buy_signals[:min_len]
sell_signals = sell_signals[:min_len]


# Initialize trading simulation with rolling max units

position = 0
cash = 0.0
profit = np.zeros(min_len)

for i in range(min_len):
    # Buy
    if buy_signals[i] == 1 and position < max_units_budget:
        units_to_buy = min(units_per_trade, max_units_budget - position)
        position += units_to_buy
        cash -= units_to_buy * prices[i]
    
    # Sell
    if sell_signals[i] == 1:
        units_to_sell = min(position, units_per_trade)
        position -= units_to_sell
        cash += units_to_sell * prices[i]
    
    # Mark-to-market profit
    profit[i] = cash + position * prices[i]


# Time axis

t = np.arange(min_len)


# Plot stock price with buy/sell points
plt.figure(figsize=(14, 5))
plt.plot(t, prices, label="Stock Price", color="blue", linewidth=1.5)
plt.scatter(t[buy_signals==1], prices[buy_signals==1], color='green', marker='^', label='Buy', s=80)
plt.scatter(t[sell_signals==1], prices[sell_signals==1], color='red', marker='v', label='Sell', s=80)
plt.title(f"{symbol.upper()} Stock Price with Buy/Sell Signals")
plt.xlabel("Time (samples)")
plt.ylabel("Price (USD)")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.show()

# Plot cumulative profit

plt.figure(figsize=(14, 5))
plt.plot(t, profit, label="Cumulative Profit", color="purple", linewidth=1.8)
plt.title("Trading Profit Over Time")
plt.xlabel("Time (samples)")
plt.ylabel("Profit (USD)")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.show()

print(f"Final Profit: ${profit[-1]:.2f} (holding {position} units)")
