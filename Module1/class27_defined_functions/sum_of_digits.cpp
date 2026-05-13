#include <stdio.h>

int sumdigits(int x){
    int sum = 0;
    while(x>0){
        int f = x %10; //sum+= x%10
        sum += f;
        x = x/10;

    }
    return sum;
}

int main(){

    printf("%d\n", sumdigits(123));
    return 0;
}