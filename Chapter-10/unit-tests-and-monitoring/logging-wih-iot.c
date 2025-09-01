import logging
import time

# Set up logging
logging.basicConfig(filename='edge_device.log', level=logging.INFO)

# Simulate sensor data collection and logging
def collect_sensor_data():
    sensor_data = {'temperature': 70, 'humidity': 45}
    logging.info(f"Collected data: {sensor_data}")
    return sensor_data

# Simulate device status check
def check_device_status():
    logging.info("Device is running smoothly.")
    return "Device is online"

while True:
    collect_sensor_data()
    check_device_status()
    time.sleep(60)  # Log every minute
