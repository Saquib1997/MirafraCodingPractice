// Code to swap bytes of the 16 bit integer 
#include <stdio.h>
#include <stdint.h>

int main() {

    uint16_t a=0x1234;				     // OUTPUT = 0x3412 (12 is one byte and 34 is one byte, 
    a = ((a & 0xff00) >> 8) | ((a & 0x00ff)<<8);     // So we swapped both with each other)
    printf("%x",a);
    return 0;   

}   
