#include <stdio.h>
#include <string.h>
void myStrcpy(char *str1,char *str2){
	int i=0;
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
}
int main()
{
	char str1[50],str2[50];
	printf("Enter the string: ");
	gets(str1);
	myStrcpy(str1,str2);
	printf("Copied String is: ");
	puts(str2);
	return 0;
}



