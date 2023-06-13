#include <stdio.h>

void my_strcpy(char *str1,char *str2){
    int i;
    for(i=0; str1[i] != '\0' && (str2[i]=str1[i]);i++);
    str2[i]='\0';
}

int main() {
    
    char str1[]="Hello",str2[10];
    my_strcpy(str1,str2);
    puts(str2);

    return 0;
}




