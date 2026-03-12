//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include<stdio.h>
#include<stdlib.h>  //for abs()
int main(){
    // we find diagonal values when i = j, but we will need two loops, there's a way to work with only one loop
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int md=0 , sd=0;
    for (int i=0;i<n;i++){
        md+=arr[i][i];
    }
    for(int i=n-1, j=0;i>=0;i--,j++){  //we could have done i>=0 && j<n but doing i>=0,j<n completely ignores i>=0
        sd+=arr[i][j];
    }
    int ans = abs(md-sd);
    printf("%d\n",ans);
    return 0;
}