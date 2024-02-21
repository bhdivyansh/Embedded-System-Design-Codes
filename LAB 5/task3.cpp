#include "mbed.h"
#include "TextLCD.h"
AnalogIn ain(PC_5);
TextLCD lcd(PC_0, PC_1, PB_0, PA_4, PA_1, PA_0);
int main()
{
    lcd.cls();
    while (1)
    {
        float value = ain * 5;
        lcd.locate(5, 0);
        lcd.printf("v = %0.3f", value);
        wait(0.5);
        lcd.cls();
        wait(0.5);
    }
}