// LAB 1 TASK 1 - BLINKING ONBOARD LED LD2 WITH A DELAY OF 0.5s DELAY
// Select Build target as NUCLEO-L152RE

#include "mbed.h"

DigitalOut myled(LED1); // myled is just a variable.... (PIN NAME) inside brackets example PA_3, PC_1.... LED1 IS ONBOARD LED IDENTIFIER

int main() {
  while(1) { // STANDARD DONE IN ALL PROGRAMS
    myled = 1; // ON STATE
    wait(0.5);
    myled = 0;
    wait(0.5);
  }
}
