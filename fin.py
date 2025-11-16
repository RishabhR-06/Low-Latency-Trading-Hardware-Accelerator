import yfinance as yf
import numpy as np
import matplotlib.pyplot as plt

# -------------------------------
# Parameters
# -------------------------------
symbol = "^IXIC"            # Stock symbol (e.g. AAPL, TSLA, NVDA)
period = "7d"             # Time period: "1mo", "3mo", "1y", etc.
interval = "1m"            # Interval: "1h", "1d", "5m", etc.
output_file = "stock.mem"  # Output memory file name

# -------------------------------
# Fetch stock data
# -------------------------------
data = yf.download(symbol, period=period, interval=interval, progress=False)
prices = data["Close"].values

# -------------------------------
# Normalize to 0–255 (8-bit range)
# -------------------------------
min_val, max_val = np.min(prices), np.max(prices)
normalized = ((prices - min_val) / (max_val - min_val) * 255).astype(int)

# -------------------------------
# Write to memory file
# -------------------------------
with open(output_file, "w") as f:
    for i, val in enumerate(normalized):
        val = int(val)  # <-- convert to plain int to avoid numpy formatting issue
        if (i + 1) % 16 == 0:
            f.write("{:02X}\n".format(val))
        else:
            f.write("{:02X} ".format(val))

print(f"✅ Stock data for {symbol} written to '{output_file}' with {len(normalized)} samples.")

# -------------------------------
# Optional: Plot the stock data
# -------------------------------
plt.figure(figsize=(12, 5))
plt.plot(prices, label=f"{symbol} Close Price")
plt.title(f"{symbol} Stock Data ({period}, {interval})")
plt.xlabel("Sample")
plt.ylabel("Price (USD)")
plt.grid(True)
plt.legend()
plt.show()
