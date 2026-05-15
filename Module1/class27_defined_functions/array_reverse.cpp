#include <stdio.h>

int arr[100]; 
int n;

void swap(int &x, int &y){  //x,a and y,b share the same memory address    //this code will only work for c++
    //for c   void swap(int *x, int *y)
    int temp = x; //int *temp = *x;
    x = y;
    y = temp;

}

void reverse(){  //if arr and n wasn't declared globally but in main() function, then the fucntion declaration would be reverse(int arr[], int n), array by default passes reference that's why not &arr[]
    for(int i=0, j = n-1; i<j ; i++,j--){
        swap(arr[i],arr[j]);
    }
}

int main(){
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    reverse(); //this would be reverese(arr,n)
    for(int i = 0; i<n; i++){
        printf("%d",arr[i]);
    }
    printf("\n");


    return 0;
}