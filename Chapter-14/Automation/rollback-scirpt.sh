# Rollback script to revert firmware to the last stable version
#!/bin/bash
LAST_GOOD_FIRMWARE_PATH=/path/to/last_good_firmware.hex
DEVICE_PORT=/dev/ttyUSB0

# Flash the last stable firmware version
avrdude -c arduino -p t2560 -P $DEVICE_PORT -U flash:w:$LAST_GOOD_FIRMWARE_PATH:i

