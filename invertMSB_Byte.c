#include<stdio.h>
#include<stdint.h>
#include"displayBits.h"

uint16_t invertMSB_Byte(uint16_t n){
	return n^0xff00;
}

void main(){
	uint16_t num;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("The Bit display before: ");
	displayBits(num);
	num = invertMSB_Byte(num);
	printf("The obtained number is: %d and Bits display is: ",num);
	displayBits(num);
}
