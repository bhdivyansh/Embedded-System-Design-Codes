// MAY HAVE SOME CHANGES, SEE SUBMITTED DOCUMENT FOR THIS CODE IN CASE ANY CHANGES ARE THERE.

#include "mbed.h"


DigitalIn switch_mode(PC_10);
BusOut north_south(PC_4, PB_13, PB_14); //GYR
BusOut east_west(PB_15, PB_1, PB_2); //GYR

int main() {
    while(1) {
        if (switch_mode){
            north_south = 1; //001
            east_west = 4;   //100
            wait(15);
            north_south = 2; //010
            wait(2);
            north_south = 4; //100
            east_west = 1;   //001
            wait(15);
            east_west = 2;   //010
            wait(2);
            north_south = 1; //001
            east_west = 4;   //100
        }
        else{
            north_south = 2; //010
            east_west = 2;   //010
            wait(2);
            north_south = 0; //000
            east_west = 0; //000
            wait(2);
        }
    }
}
