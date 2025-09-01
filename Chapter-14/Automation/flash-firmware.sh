# Example script for flashing firmware to a device
#!/bin/bash
DEVICE_PORT=/dev/ttyUSB0
FIRMWARE_PATH=./firmware.hex

# Flash firmware using avrdude
avrdude -c arduino -p t2560 -P $DEVICE_PORT -U flash:w:$FIRMWARE_PATH:i

