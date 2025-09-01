import paho.mqtt.client as mqtt
import ssl

class SecureIoTDevice:
    def __init__(self, device_id):
        self.device_id = device_id
        self.client = mqtt.Client()

    def connect(self, broker_address, port=8883):
        self.client.tls_set(certfile="cert.pem", keyfile="key.pem", ca_certs="ca-cert.pem", tls_version=ssl.PROTOCOL_TLS)
        self.client.connect(broker_address, port)

    def send_data(self, topic, data):
        self.client.publish(topic, data)

# Example of secure MQTT communication
device = SecureIoTDevice(device_id=102)
device.connect("mqtts://secure-broker.com")
device.send_data("iot/device/102/temperature", "Temperature: 23C")
