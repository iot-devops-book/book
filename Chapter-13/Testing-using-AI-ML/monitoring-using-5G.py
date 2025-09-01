import time
import random

# Simulate real-time embedded system monitoring
def real_time_monitoring():
    while True:
        sensor_data = random.randint(20, 100)  # Simulated sensor data
        print(f"Real-Time Sensor Data: {sensor_data}")
        time.sleep(1)  # Simulate data update every second

# Simulating real-time system monitoring
real_time_monitoring()
