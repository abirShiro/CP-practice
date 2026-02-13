#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);   //don't do scanf("%d\n") here, or else it will take one extra input
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}