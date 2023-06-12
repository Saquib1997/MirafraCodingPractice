#include <stdio.h>

char * my_strstr(char *str1, char *str2){
    char *ptr1=str1,*ptr2=str2,*match=NULL;
    while(*ptr1!='\0'){
        if(*ptr1==*ptr2){
            match = ptr1;
            while((*ptr1==*ptr2) && *ptr1 != '\0'){
                ptr1++;
                ptr2++;
            }
            if(*ptr2=='\0')
            return match;
            else{
                ptr2=str2;
                match=NULL;
            }
        }
        else{
            ptr1++;
        }
        
    }
    return "Not Found";
    
}

int main() {
    char *match=NULL, str1[]="Hello World", str2[]="World";
    match = my_strstr(str1,str2);
    puts(match);
    return 0;
}
