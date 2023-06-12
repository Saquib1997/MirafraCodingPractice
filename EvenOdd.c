#include <stdio.h>
#include "displayBits.h"

void EvenOdd(int n){
	if(n&1)
		printf("%d is Odd number\n",n);
	else 
		printf("%d is Even number\n",n);
}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	displayBits(n);
	EvenOdd(n);
	return 0;
}
