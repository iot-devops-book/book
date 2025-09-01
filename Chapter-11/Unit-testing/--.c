/ File: test_temperature.c

#include "unity.h"
#include "temperature.h"
#include "mock_adc_driver.h"

// Called before each test
void setUp(void) {
    // Initialize mocks or global state
    mock_adc_driver_Init();
}

// Called after each test
void tearDown(void) {
    // Verify mock interactions and cleanup
    mock_adc_driver_Verify();
    mock_adc_driver_Destroy();
}

void test_celsius_to_fahrenheit_positive(void) {
    TEST_ASSERT_EQUAL_FLOAT(98.6f, celsius_to_fahrenheit(37.0f));
}

void test_read_temperature_adc(void) {
    // Arrange: stub ADC to return raw value
    mock_adc_driver_read_ExpectAndReturn(1023);
    // Act
    float temp = read_temperature();
    // Assert: raw 1023 maps to 100°C
    TEST_ASSERT_FLOAT_WITHIN(0.1f, 100.0f, temp);
}
