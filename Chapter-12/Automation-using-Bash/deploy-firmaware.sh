# Deployment script for over-the-air (OTA) firmware update
#!/bin/bash

# Step 1: Download the firmware update
curl -O https://example.com/firmware/update_v1.2.bin

# Step 2: Verify the firmware hash
expected_hash="abc123"
downloaded_hash=$(sha256sum update_v1.2.bin)

if [[ "$expected_hash" != "$downloaded_hash" ]]; then
    echo "Error: Firmware hash mismatch"
    exit 1
fi

# Step 3: Deploy the firmware update to the device
scp update_v1.2.bin user@device:/path/to/firmware

# Step 4: Restart the device to apply the update
ssh user@device "reboot"
