#include <stdio.h>
#include <string.h>
int main() {
    char temp,str[]="Hello";
    for(int i=0,j=strlen(str)-1 ; i<j && (temp=*(str+i) , *(str+i)=*(str+j) , *(str+j)=temp) ; i++,j--);
    puts(str);
    return 0;
}
