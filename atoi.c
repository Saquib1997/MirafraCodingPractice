#include <stdio.h>

int myAtoi(const char* str) {
    
    int sign = 1, result = 0;
    
    // Handle leading white space
    while (*str == ' ') {
        str++;
    }
    
    // Handle sign
    if (*str == '+' || *str == '-') {
        sign = (*str == '+') ? 1 : -1;
	str++;
    }
    
    // Convert digits to integer
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
	str++;
    }
    return sign * result;
}

int main() {
    char str[20];
    gets(str);
    int num = myAtoi(str);
    printf("The integer value is: %d\n", num);
    return 0;
}

