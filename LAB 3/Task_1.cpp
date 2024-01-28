#include "mbed.h"

PwmOut led(PC_8);

int main()
{
    led.period_ms(10);
    led = 0.25;
}