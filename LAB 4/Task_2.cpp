#include "mbed.h"

Serial pc(USBTX, USBRX);
PwmOut led(PC_8);
float brightness = 0.0;

int main()
{
    while (1)
    {
        printf("Press \"i\" to increase and \"d\" to decrease: ");
        char c = pc.getc();
        if ((c == 'i') && (brightness < 1.0))
        {
            printf("Brightness Increased by 10%\n");
            brightness += 0.1;
            led = brightness;
        }
        if ((c == 'i') && (brightness == 1.0))
        {
            printf("Max brightness Reached\n");
        }
        if ((c == 'd') && (brightness > 0.0))
        {
            printf("Brightness Decreased by 10%\n");
            brightness -= 0.1;
            led = brightness;
        }
        if ((c == 'd') && (brightness == 0.0))
        {
            printf("LED Off\n");
        }
    }
}