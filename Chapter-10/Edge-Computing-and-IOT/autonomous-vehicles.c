class AutonomousVehicle:
    def __init__(self, vehicle_id):
        self.vehicle_id = vehicle_id

    def process_sensor_data(self, sensor_data):
        # Analyze sensor data (simplified for demonstration)
        if sensor_data["obstacle_distance"] < 10:  # If an obstacle is too close
            print(f"Vehicle {self.vehicle_id}: Braking to avoid collision.")
        else:
            print(f"Vehicle {self.vehicle_id}: Safe to continue driving.")

# Simulate autonomous vehicle sensor data
vehicle = AutonomousVehicle(vehicle_id=202)
sensor_data = {"obstacle_distance": 5}  # Obstacle too close
vehicle.process_sensor_data(sensor_data)
