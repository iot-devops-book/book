# Continuous Integration pipeline setup for embedded systems
# Build the firmware
make build

# Run unit tests
make test

# Run integration tests with HIL simulations
make run_integration_tests

# Deploy the latest build to a test device
scp firmware.bin user@device:/path/to/firmware
ssh user@device "reboot"
