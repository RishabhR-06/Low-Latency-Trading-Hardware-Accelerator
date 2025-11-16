import numpy as np
import matplotlib.pyplot as plt

# -------------------------------
# Function to load a memory file
# -------------------------------
def load_mem_file(filename):
    hex_values = []
    with open(filename, "r") as f:
        for line in f:
            values = [v for v in line.strip().split() if v]
            hex_values.extend(values)
    # Convert hex to integers (0–255) and normalize to -1..1
    wave_values = np.array([int(h, 16) for h in hex_values])
    wave_values = (wave_values - 127) / 127.0
    return wave_values

# -------------------------------
# Load original wave + all SMA outputs
# -------------------------------
base_wave = load_mem_file("sinerom_long.mem")  # Original noisy wave
sma_files = {
    5:   load_mem_file("output_5.mem"),
    10:  load_mem_file("output_10.mem"),
    20:  load_mem_file("output_20.mem"),
    50:  load_mem_file("output_50.mem"),
    100: load_mem_file("output_100.mem"),
    200: load_mem_file("output_200.mem")
}

# -------------------------------
# Time axis setup (use original wave length)
# -------------------------------
num_samples = len(base_wave)
t = np.linspace(0, num_samples / 256, num_samples, endpoint=False)

# -------------------------------
# Plot all waves on one figure
# -------------------------------
plt.figure(figsize=(14, 6))
plt.plot(t, base_wave, label="Original Noisy Wave", color="gray", alpha=0.5, linewidth=1.5)

for window, wave in sma_files.items():
    # Trim SMA wave to match t length
    plt.plot(t, wave[:len(t)], label=f"SMA (window={window})", linewidth=1.2)

plt.title("Original vs SMA-Filtered Waves")
plt.xlabel("Time [arbitrary units]")
plt.ylabel("Amplitude")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()

# -------------------------------
# Optional: Zoom first 256 samples
# -------------------------------
plt.figure(figsize=(14, 6))
plt.plot(t[:256], base_wave[:256], label="Original Noisy Wave", color="gray", alpha=0.5, linewidth=1.5)
for window, wave in sma_files.items():
    plt.plot(t[:256], wave[:256], label=f"SMA (window={window})", linewidth=1.2)

plt.title("Zoom: First Cycle (256 Samples)")
plt.xlabel("Time [arbitrary units]")
plt.ylabel("Amplitude")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()
