#include <stdio.h>
#include <stdint.h>
void displayBits(int n){
	int i;
	for(i=31;i>=0;i--){
		printf("%c",n&(1<<i)?'1':'0');
	}
}
int reverseBits(int num){
	int rev=0,i;
	for(i=0;i<=31;i++){
		rev<<=1;
		rev=rev|(num&1);
		num>>=1;
	}
	return rev;
}
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("\n");
	printf("Bit representation of current number is num: ");
	displayBits(num);
	printf("\n");
	num=reverseBits(num);
	printf("Bit representation of number after bits reversed is num: ");
	displayBits(num);
	printf("\n");
	return 0;
}
