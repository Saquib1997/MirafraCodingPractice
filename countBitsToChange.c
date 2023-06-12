#include <stdio.h>
#include "displayBits.h"
int toChangeBits(int a,int b){
	int count=0, xorRes=a^b;
	while(xorRes){
		count=count+(xorRes&1);
		xorRes>>=1;
	}
	return count;
}

int main(){
	int a,b,count;
	printf("Enter the number a,b: ");
	scanf("%d%d",&a,&b);
	printf("The bit Display of a and b is:\n");
	displayBits(a);
	displayBits(b);
	count= toChangeBits(a,b);
	printf("The number of bits to be changed is: %d\n",count);
	return 0;
}
