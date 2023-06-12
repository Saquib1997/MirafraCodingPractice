#include <stdio.h>

void displayBits(int n){
	int i;
	for(i=31;i>=0;i--){
		printf("%c",n&(1<<i)?'1':'0');
	if(i%8==0)
		printf(" ");
	}
	printf("\n");
}





