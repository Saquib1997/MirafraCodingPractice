#include <stdio.h>
#include <string.h>
void myStrrev(char *arr){
	char temp;
	int a=strlen(arr)/2;
	int i=0,j=strlen(arr)-1;
	while(a!=0){
		temp=*(arr+i);
		*(arr+i)=*(arr+j);
		*(arr+j)=temp;
		a--;
	}
}
int main()
{
	char arr[50];
	gets(arr);
	myStrrev(arr);
	puts(arr);
	return 0;
}
