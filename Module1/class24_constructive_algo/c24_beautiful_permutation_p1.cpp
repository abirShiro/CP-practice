//problem: https://cses.fi/problemset/task/1070/
// keep evens as pairs first then odds as pairs to get beautiful permutation, brautiful permutation is having two adjacent elements not having a difference of 1
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1\n");
    }
    if(n<=3){
        printf("NO SOLUTION\n");
    }
    else{
        for(int i=2;i<=n;i+=2){
            printf("%d ",i);
        }
        for(int i=1;i<=n;i+=2){
            printf("%d ",i);
        }
    }
    return 0;
}
