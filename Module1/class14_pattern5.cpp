#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        int x = n-i;
        for(int j=1; j<=x;j++){
            printf(" ");
        }
        int y= 2*i -1;
        for(int k=1;k<=y;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        int x = n-i;
        for(int l=1;l<=x;l++){
            printf(" ");
        }
        int y = 2*i - 1;
        for(int m=1;m<=y;m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}