//problem link :https://atcoder.jp/contests/abc307/tasks/abc307_a

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int sum=0;
        int arr[7];       
        for(int j=0; j<7;j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        printf("%d ",sum);
    }
    printf("\n");
    return 0;
}