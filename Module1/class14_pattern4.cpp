#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x = n-i;
        for(int j=1;j<=x;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("#");
        }
        printf("\n");
    }
    return 0;

}