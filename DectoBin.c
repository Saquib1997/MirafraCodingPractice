#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num & 1;
        num >>= 1;
        i++;
    }

    for (int j = i-1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal = 3;
    printf("Decimal %d in binary is: ", decimal);
    decimalToBinary(decimal);
    return 0;
}









