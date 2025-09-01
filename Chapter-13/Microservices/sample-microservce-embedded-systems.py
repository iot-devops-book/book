import socket

# Function to simulate communication between microservices in an embedded system
def send_data_to_service(service_ip, port, data):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect((service_ip, port))
        s.sendall(data.encode())
        response = s.recv(1024)
    print("Received:", response.decode())

# Simulate sending data to a microservice
service_ip = "192.168.1.10"
port = 8080
data = "Temperature: 72C"
send_data_to_service(service_ip, port, data)
