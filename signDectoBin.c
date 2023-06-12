#include <stdio.h>

int main() {
    int a = -10, i;
    
    if (a < 0){
        printf("1");
        a=-a;   
    }
    else
        printf("0");

    for (i = 30; i >= 0; i--) {
        if (a & (1 << i))
            printf("1");
        else
            printf("0");

        if (i % 8 == 0)
            printf(" ");
    }
    
    printf("\n");
    return 0;
}
