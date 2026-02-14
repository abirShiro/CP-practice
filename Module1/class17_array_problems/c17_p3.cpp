//problem link: https://atcoder.jp/contests/abc368/tasks/abc368_a

// print from n-k to n-1 then  print from 0 to n-k-1

#include <stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=n-k;j<=n-1;j++){
        printf("%d ",arr[j]);
    }
    for(int j=0;j<=n-k-1;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    return 0;
}