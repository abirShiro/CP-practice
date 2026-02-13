//1,2,3,4,5 handshakes with each other , how many combinations possible

#include<stdio.h>
int main(){
    int n = 5;
    int count = 0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            count++;
            printf("(%d , %d)",i,j);
        }
        printf("\n");
    }
    printf("total possible combinations = %d",count);
    return 0;
}