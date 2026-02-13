#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int y = n-i;
        for(int k=1; k<=y;k++){
            printf(" ");
        }
        int x = 2*i -1;
        for(int j=1;j<=x;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}