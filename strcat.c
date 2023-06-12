#include <stdio.h>
#include <string.h>
void myStrcat(char *str1,char *str2){
	int j=0,i=strlen(str1);
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}
int main()
{
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	myStrcat(str1,str2);
	puts(str1);
	return 0;
}
