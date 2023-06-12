#include <stdio.h>
#include <stdint.h>

uint16_t revNibble(uint16_t num) {
    uint8_t a;
    int i;
    a = (num & 0xf0) >> 4;
    num &= 0xff0f;
    for (i = 7; i >= 4; i--) {
        num |= (a & 1) << i;
        a >>= 1;
    }
    return num;
}

int main() {
    uint16_t num = 0x1214;
    printf("%x\n", revNibble(num));
    return 0;
}
