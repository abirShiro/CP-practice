#include<stdio.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        if( arr[i+1] - arr[i] <=d){
            printf("-1\n");
            break;
        }
        else{
            printf("%d\n",arr[i+1]);
        }
    }
    return 0;

}