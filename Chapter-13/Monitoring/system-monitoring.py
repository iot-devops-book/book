import random
import time

# Function to simulate real-time monitoring of an embedded system
def real_time_monitoring():
    while True:
        sensor_value = random.randint(20, 100)
        print(f"Sensor Value: {sensor_value}")

        # Simulating alert condition
        if sensor_value > 90:
            print("ALERT: High Sensor Value Detected!")

        time.sleep(1)  # Simulate 1-second data update

# Simulate real-time monitoring
real_time_monitoring()
