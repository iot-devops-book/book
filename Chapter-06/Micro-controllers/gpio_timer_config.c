#include "hardware_config.h"

// Configure the GPIO pin for output
void configure_gpio_pin()
{
    // Set pin direction to output
    GPIO_PORTA_DIR |= (1 << 3);  // Pin 3 on Port A set as output

    // Enable digital functionality for the pin
    GPIO_PORTA_DEN |= (1 << 3);  // Digital enable for Pin 3
}

// Configure the timer for PWM
void configure_timer()
{
    // Set timer to operate in PWM mode
    TIMER0_CTL = 0; // Disable timer before configuration
    TIMER0_CFG = 0x04; // 16-bit timer
    TIMER0_TAMR = 0x0A; // PWM mode

    // Set the reload value for the timer
    TIMER0_TAILR = 16000;  // Assuming 16 MHz clock, set period to 1ms

    // Enable timer
    TIMER0_CTL |= 0x01;  // Start the timer
}
