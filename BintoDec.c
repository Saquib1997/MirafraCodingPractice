#include <stdio.h>                     
                                        
int binaryToDecimal(int num) {             
    int decimal = 0;                        
    int base = 1;                           

    while (num > 0) {
        if (num & 1) {
            decimal += base;
        }
        base <<= 1;
        num >>= 1;
    }

    return decimal;
}

int main() {
    int binary = 1010;
    int decimal = binaryToDecimal(binary);
    printf("Binary %d in decimal is: %d", binary, decimal);
    return 0;
}
































