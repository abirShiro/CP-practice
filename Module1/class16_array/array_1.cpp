#include<stdio.h>
int main(){
    int arr[3];
    arr[0]=1;   //int arr[3] ={1,2,3} ;
    arr[1]=2;    
    arr[2]=3;    
    printf("%d\n",arr[0]); //not &arr[0] becuase & means the address. But we need the "value" in that index 
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);

    for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}