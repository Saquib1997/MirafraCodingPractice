#include <stdio.h>

int main(){
	int a,x,y,p,n=0,mask;
	printf("Enter number x: ");
	scanf("%d",&x);
	printf("Enter number y: ");
	scanf("%d",&y);
	printf("Enter the bit position from where we have to insert: ");
	scanf("%d",&p);
	printf("x: ");
	displayBits(x);
	printf("y: ");
	displayBits(y);
	a=y;
	while(a){
		a=a>>1;
		n++;
	}
	mask = ~(~0<<n);
	printf("mask: ");
	displayBits(mask);
	x=(x&(~(mask<<p))|((y&mask)<<p));
	printf("x after insterting y from bit position %d is: ",p);
	displayBits(x);
	return 0;
}
