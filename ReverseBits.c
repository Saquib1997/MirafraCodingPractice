// Reverse bits of a number

#include <stdio.h>
#include <stdint.h>

int main() {
    int num= 0x11111111;   
    int i,j;
    for(i=0,j=31; i<j ; i++,j--){
        if((num&(1<<i)) != (num&(1<<j))){  
            num = num ^ (1<<i);
            num = num ^ (1<<j);
        }
    }
    printf("%x\n",num);
    return 0;
}
