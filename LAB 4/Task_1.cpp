#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led(LED1);

int main()
{
    while (1)
    {
        printf("Press a character: ");
        int y = pc.getc();
        printf("Recieved Char: %c\n", y);
        if (y == 'H')
        {
            led = 1;
            wait(0.2);
            led = 0;
        }
        else
        {
            led = 0;
        }
    }
}