#include "mbed.h"

BusOut myLed(PC_4, PB_13, PB_14, PB_15);
int i;
int main() {
  while(1) {
      myLed = 0x00;
      for(i=0; i<15; i++){
          wait(1);
          myLed = myLed + 1;
      }
      wait(1);
  }
  return 0;
}
