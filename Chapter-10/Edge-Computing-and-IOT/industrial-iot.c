import random

# Simulate data from an industrial machine sensor
def generate_sensor_data():
    temperature = random.uniform(30.0, 70.0)  # Simulate temperature between 30-70°C
    vibration = random.uniform(0.0, 5.0)  # Simulate vibration level
    return temperature, vibration

def check_machine_health(temperature, vibration):
    if temperature > 60.0:
        print(f"Warning: High temperature detected: {temperature}°C")
    if vibration > 4.0:
        print(f"Warning: Excessive vibration detected: {vibration} units")

# Simulate a machine monitoring system
temperature, vibration = generate_sensor_data()
check_machine_health(temperature, vibration)
