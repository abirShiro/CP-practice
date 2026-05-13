#include <stdio.h>

void swap(int &x, int &y){  //x,a and y,b share the same memory address
    int temp = x; 
    x = y;
    y = temp;

}

int main(){
    int a = 5, b = 2;
    swap(a,b);
    printf("%d  %d", a,b);
    return 0;
}