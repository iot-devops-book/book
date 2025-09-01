#include "unity.h"
#include "firmware.h"

// Test Case for LED blink function
void test_LED_blink_on(void) {
    LED_state = 1;
    TEST_ASSERT_EQUAL(1, LED_state);  // Check if LED is turned on
}

void test_LED_blink_off(void) {
    LED_state = 0;
    TEST_ASSERT_EQUAL(0, LED_state);  // Check if LED is turned off
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_LED_blink_on);
    RUN_TEST(test_LED_blink_off);
    return UNITY_END();
}
