//problem link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_D

#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int A[n][m],b[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+= A[i][j]*b[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}