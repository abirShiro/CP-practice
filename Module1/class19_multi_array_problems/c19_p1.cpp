//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){     //we went to each rows
        for(int j=m-1;j>=0;j--){   //then we reverse printed , since we used to go from 0 to m-1, now we go from m-1 to 0
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}