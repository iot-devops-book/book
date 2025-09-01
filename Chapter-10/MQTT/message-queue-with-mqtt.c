import paho.mqtt.client as mqtt

# MQTT message queue setup for IoT device
class IoTDevice:
    def __init__(self, device_id):
        self.device_id = device_id
        self.client = mqtt.Client()

    def connect(self, broker_address):
        self.client.connect(broker_address)

    def publish_data(self, topic, data):
        self.client.publish(topic, data)

    def subscribe(self, topic):
        self.client.subscribe(topic)

    def on_message(self, client, userdata, message):
        print(f"Device {self.device_id} received message: {message.payload.decode()}")

# Set up MQTT client
device = IoTDevice(device_id=101)
device.connect("mqtt://broker_address")
device.client.on_message = device.on_message

# Subscribe to a topic
device.subscribe("iot/device/101/commands")

# Simulate device publishing data
device.publish_data("iot/device/101/temperature", "Temperature: 22C")
