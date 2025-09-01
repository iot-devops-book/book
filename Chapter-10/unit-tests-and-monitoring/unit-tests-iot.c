import unittest
from edge_device import process_sensor_data

class TestEdgeDevice(unittest.TestCase):
    def test_temperature_alert(self):
        sensor_data = {'temperature': 85}
        alert = process_sensor_data(sensor_data)
        self.assertEqual(alert, "Temperature exceeds safe limit!")
        
    def test_normal_temperature(self):
        sensor_data = {'temperature': 65}
        alert = process_sensor_data(sensor_data)
        self.assertEqual(alert, "Temperature is normal.")

if __name__ == "__main__":
    unittest.main()
