//TWO conditions should be fulfilled by a number to be power of 4.
//1.) Number should be power of 2
//2.) From LSB bit till the Set Bit, number of zero bits should be EVEN

#include <stdio.h>
#include <stdint.h>

int pow_of_4(int a){
    int count;
    if(a&a-1)                  //To check if power of 2 
    return 0;                  //(a&a-1) should be 0 for a to be power of 2
    else{
        while(a != 1){         //Counting number of zero bits till set bit
            count++;
            a >>= 1;
        }
    }
    if(count%2==0)             //If even, Power of 4
    return 1;
    else                       //Else, Not power of 4
    return 0;
}

int main() {
    int a = 16;
    printf("%s\n",pow_of_4(a) ? "Yes" : "No");
    return 0;   
}   



