#include <stdio.h>

void swap(int &x, int &y){  //x,a and y,b share the same memory address    //this code will only work for c++
    //for c   void swap(int *x, int *y)
    int temp = x; //int *temp = *x;
    x = y;
    y = temp;

}

int main(){
    int a = 5, b = 2;
    swap(a,b); //if you call a function by variables then define the function with reference parameters //here swap(&a,&b)
    printf("%d  %d", a,b);
    return 0;
}