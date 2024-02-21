#include "mbed.h"
#include "TextLCD.h"
TextLCD lcd(PC_0, PC_1, PB_0, PA_4, PA_1, PA_0);
int main()
{
    lcd.cls();
    while (1)
    {
        char in = pc.getc();
        lcd.printf("%c", in);
    }
}