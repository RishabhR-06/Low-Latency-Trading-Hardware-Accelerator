import numpy as np
import matplotlib.pyplot as plt

# -------------------------------
# Function to load memory file
# -------------------------------
def load_mem_file(filename):
    hex_values = []
    with open(filename, "r") as f:
        for line in f:
            values = [v for v in line.strip().split() if v]
            hex_values.extend(values)
    # Convert hex -> integers (0–255)
    wave_values = np.array([int(h, 16) for h in hex_values])
    # Normalize to -1..1 range
    wave_values = (wave_values - 127) / 127.0
    return wave_values

# -------------------------------
# Load base stock data + SMA outputs
# -------------------------------
base_wave = load_mem_file("stock.mem")

sma_files = {
    5:   load_mem_file("output_5.mem"),
    10:  load_mem_file("output_10.mem"),
    20:  load_mem_file("output_20.mem"),
    50:  load_mem_file("output_50.mem"),
    100: load_mem_file("output_100.mem"),
    200: load_mem_file("output_200.mem"),
}

# -------------------------------
# Time axis setup
# -------------------------------
num_samples = len(base_wave)
t = np.linspace(0, num_samples / 256, num_samples, endpoint=False)  # arbitrary units

# -------------------------------
# Plot: Stock + SMA waves
# -------------------------------
plt.figure(figsize=(14, 6))
plt.plot(t, base_wave, label="Stock Data", color="gray", alpha=0.6, linewidth=1.3)

for window, wave in sma_files.items():
    min_len = min(len(t), len(wave))  # truncate to match lengths
    plt.plot(t[:min_len], wave[:min_len], label=f"SMA (window={window})", linewidth=1.2)

plt.title("Stock Data vs SMA Outputs")
plt.xlabel("Time [arbitrary units]")
plt.ylabel("Amplitude")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()

# -------------------------------
# Zoom: First segment (e.g., first 300 samples)
# -------------------------------
zoom_samples = 1000
plt.figure(figsize=(14, 5))
plt.plot(t[:zoom_samples], base_wave[:zoom_samples], label="Stock Data", color="gray", alpha=0.6, linewidth=1.3)

for window, wave in sma_files.items():
    min_len = min(zoom_samples, len(wave[:zoom_samples]))
    plt.plot(t[:min_len], wave[:min_len], label=f"SMA (window={window})", linewidth=1.2)

plt.title("Zoomed View of Stock + SMA (First 300 Samples)")
plt.xlabel("Time [arbitrary units]")
plt.ylabel("Amplitude")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()
