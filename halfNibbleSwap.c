// Code to swap 2nd and 3rd bit with 8th and 9th bit
#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t a=0x1234;
    a = (a & ~0x000c) & (a & ~0x0300) | ((a & 0x000c)<<6) | ((a & 0x0300)>>6);
    printf("%x",a);
    return 0;
}



