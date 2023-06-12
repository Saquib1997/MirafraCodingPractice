#include <stdio.h>
#include "displayBits.h"

int main(){
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	displayBits(n);
	if(n&n-1)
		printf("%d is not power of 2\n",n);
	else
		printf("%d is power of 2\n",n);
	return 0;
}
