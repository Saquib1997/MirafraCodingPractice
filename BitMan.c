#include <stdio.h>
#include <stdint.h>
#include "displayBits.h"
int main(){

uint32_t x=43292,y=17932,r=0,i=5;
r=(x&(~(~0<<(i+1))))|(y&(~0<<(i+1)));
printf("x: ");
displayBits(x);
printf("y: ");
displayBits(y);
printf("r: ");
displayBits(r);
printf("%x\n",r);
return 0;
}
