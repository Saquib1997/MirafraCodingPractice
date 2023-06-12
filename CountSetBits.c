#include <stdio.h>
#include "displayBits.h"

int main(){
	static int count,a;
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	a=n;
	displayBits(n);
	while(n){
		count++;
		n=n&n-1;
	}
	printf("%d has %d set bits\n",a,count);
	return 0;
}
