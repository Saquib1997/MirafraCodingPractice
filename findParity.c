#include <stdio.h>

int main(){
	int num,count=0;
	printf("Enter the number to check its pairity a: ");
	scanf("%d",&num);
	printf("Bits Display of num is: ");
	displayBits(num);
	while(num){
	count++;
	num &= (num-1);
	}
	if(count%2==0)
	printf("Even Parity\n");
	else
	printf("Odd Parity\n");
	return 0;
}

