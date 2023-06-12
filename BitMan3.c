//Clearing n bits starting from bit position p 

#include <stdio.h>
#include <stdint.h>
/*void displayBits(int a){
    int i;
    for(i=31;i>=0;i--){
        printf("%c",(a&(1<<i))?'1':'0');
    }
    printf("\n");
} */
int main() {
    uint32_t a = 0xaabbffab, n=4, p=4, mask;   //n=4,p=4
    mask = ~(~0<<n) << p;
    //displayBits(a);
    //displayBits(mask);
    a &= ~mask;
    //displayBits(a);
    printf("%x\n",a);
    return 0;   
}   
