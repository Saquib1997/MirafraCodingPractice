//Code to reverse the 1st, 2nd, 3rd bit of a 32 bit integer

#include <stdio.h>
#include <stdint.h>
int main(){
    
    uint32_t a=0xaaa8;  //0x000e
    uint8_t b;
    b = a & 0x000e;
    a &= ~0x000e;
    for(int i=3,j=1; j != 4 ;i--,j++){
       if(b & (1<<j))
            a |= (1<<i);
    }
    printf("%x\n",a);
    return 0;
    
}
