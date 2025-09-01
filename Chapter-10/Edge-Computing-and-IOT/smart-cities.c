import random
import time

# Simulate data from traffic sensors
def traffic_sensor_data():
    return random.choice([0, 1])  # 0 = No traffic, 1 = Traffic detected

# Edge computing decision to adjust traffic lights
def adjust_traffic_lights(traffic_detected):
    if traffic_detected:
        print("Traffic detected. Adjusting lights to green.")
    else:
        print("No traffic. Keeping lights on red.")

# Simulating real-time traffic sensor data processing at the edge
while True:
    traffic_detected = traffic_sensor_data()
    adjust_traffic_lights(traffic_detected)
    time.sleep(2)  # Simulate real-time processing
