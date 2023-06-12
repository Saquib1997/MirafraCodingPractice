// Code to reverse the Byte of a 16 bit integer
#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t a=0x1234;    //0x00ff
    uint8_t b = a & 0x00ff;
    a = a & ~0x00ff;
    for(int i=7;i>=0;i--){
        if(b&1==1)
        a = a | 1<<i;
        b>>=1;
    }
    printf("%x",a);
    return 0;
}




