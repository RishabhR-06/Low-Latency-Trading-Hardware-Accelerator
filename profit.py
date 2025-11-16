import numpy as np
import matplotlib.pyplot as plt
import yfinance as yf

# -------------------------------
# Parameters
# -------------------------------
stock_file = "stock.mem"
buy_file = "buy_signal.mem"
sell_file = "sell_signal.mem"
symbol = "^IXIC"            # Stock symbol (must match stock.mem)
units_per_trade = 1    # units bought/sold per signal
max_units_budget = 1     # maximum units you can hold at any time

# -------------------------------
# Function to load memory file
# -------------------------------
def load_mem_file(filename):
    """Load a hex memory file and return values as integers"""
    hex_values = []
    with open(filename, "r") as f:
        for line in f:
            values = [v for v in line.strip().split() if v]
            hex_values.extend(values)
    arr = np.array([int(h, 16) for h in hex_values])
    return arr

# -------------------------------
# Fetch original stock data for min/max
# -------------------------------
data = yf.download(symbol, period="7d", interval="1m", progress=False)
real_min_price = np.min(data["Close"].values)
real_max_price = np.max(data["Close"].values)
print(f"Real min price: {real_min_price}, Real max price: {real_max_price}")

# -------------------------------
# Load data from memory files
# -------------------------------
prices_raw = load_mem_file(stock_file)
buy_signals = load_mem_file(buy_file)
sell_signals = load_mem_file(sell_file)

# Convert 8-bit 0-255 to actual stock price
prices = real_min_price + (prices_raw / 255.0) * (real_max_price - real_min_price)

# Ensure arrays are same length
min_len = min(len(prices), len(buy_signals), len(sell_signals))
prices = prices[:min_len]
buy_signals = buy_signals[:min_len]
sell_signals = sell_signals[:min_len]

# -------------------------------
# Initialize trading simulation with rolling max units
# -------------------------------
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

# -------------------------------
# Time axis
# -------------------------------
t = np.arange(min_len)

# -------------------------------
# Plot stock price with buy/sell points
# -------------------------------
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

# -------------------------------
# Plot cumulative profit
# -------------------------------
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
