// Code to swap 2nd bit with 8th bit
#include <stdio.h>

int main() {
    int a=0x1234;
    a=(a & ~(1<<2)) & (a & ~(1<<8)) | ((a & (1<<2))<<6) | ((a & (1<<8))>>6); 
    printf("%x",a);
    return 0;
}
