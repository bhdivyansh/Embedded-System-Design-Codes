#include "mbed.h"

BusOut myLed(PC_4, PB_13, PB_14, PB_15);
DigitalIn switch1(PC_10);
int main() {
  while(1) {
      myLed = 0x00;
      if(switch1 == 0){
          myLed = 8;
          wait(0.5);
          myLed = 4;
          wait(0.5);
          myLed = 2;
          wait(0.5);
          myLed = 1;
          wait(0.5);
      }
      if(switch1 == 1){
          myLed = 1;
          wait(0.5);
          myLed = 2;
          wait(0.5);
          myLed = 4;
          wait(0.5);
          myLed = 8;
          wait(0.5);
      }
  }
  return 0;
}
