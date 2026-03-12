//problem: https://atcoder.jp/contests/abc237/tasks/abc237_b?lang=en
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int A[n][m],B[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            B[j][i]=A[i][j];
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            printf("%d ",B[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}