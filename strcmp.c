#include <stdio.h>
#include <string.h>

int myStrcmp(const char *str1, const char *str2){
    while(*str1==*str2){
        if(*str1=='\0')
        return 0;
        str1++;
        str2++;
    }
    return *str1-*str2;
}
int main() {
    const char str1[]="Hello", str2[]="Hell";
    const int res=myStrcmp(str1,str2);
    if(res>0)
    printf("str1 is greater!!\n");
    else if(res<0)
    printf("str2 is greater!!\n");
    else
    printf("Both string are equal\n");
    return 0;
}
