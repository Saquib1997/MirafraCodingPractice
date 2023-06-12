#include <stdio.h>

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	displayBits(n);
	n=n&n-1;
	displayBits(n);
	return 0;
}
