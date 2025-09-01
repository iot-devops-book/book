// Simple test using Unity framework
#include "unity.h"
#include "embedded_code.h"

void setUp(void) { /* set up code here */ }
void tearDown(void) { /* tear down code here */ }

void test_function_should_return_true_when_condition_met(void) {
    TEST_ASSERT_TRUE(function_to_test());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_return_true_when_condition_met);
    return UNITY_END();
}
