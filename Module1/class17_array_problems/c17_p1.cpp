//link: https://atcoder.jp/contests/abc290/tasks/abc290_a

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<m;i++){
        int j;
        scanf("%d",&j);
        sum+=arr[j-1];
    }
    printf("%d",sum);
    return 0;
}