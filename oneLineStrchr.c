#include <stdio.h>
#include <string.h>
int main() {
    const char *result,temp='l',str[]="Hello";
    char *cptr=str;
    for( ; *cptr && *cptr!=temp ; cptr++);
    result = *cptr==temp ? cptr : 0;
    puts(cptr);
    return 0;
}
