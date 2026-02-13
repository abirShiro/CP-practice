#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flag = 0;
    for(int i = 2; i<=n/2;i++){
        if(n%i==0){
            flag = 1;}
    }
    if(flag){
        printf("not prime");
    }
    else{
        printf("prime");
    }
    return 0;
}