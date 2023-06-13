// Reverse 6th Nibble of a 32 bit integer

#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t num= 0x12345678, mask, i;   //0x00f00000
    mask = num & 0x00f00000;
    mask >>= 20;
    num = num & ~0x00f00000;
    for(i=23;i>19;i--){
        if(mask & 1 == 1)
        num = num | (1<<i);
        mask >>= 1;
    }
    printf("%x\n",num);
    return 0;
}





