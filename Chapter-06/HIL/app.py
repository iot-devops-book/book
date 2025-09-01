import serial
import time
import os
import glob

# Automatically find the QEMU-created PTY
def find_pty():
    return glob.glob('/dev/pts/*')[-1]

print("Connecting to simulated UART...")

port = find_pty()
with serial.Serial(port, baudrate=115200, timeout=2) as ser:
    time.sleep(1)
    ser.write(b"ping\n")
    response = ser.readline().decode().strip()
    print("Received:", response)
    assert response == "pong", "Expected 'pong' from firmware"
