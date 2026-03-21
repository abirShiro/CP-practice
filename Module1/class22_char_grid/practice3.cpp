//problem : https://codeforces.com/contest/1873/problem/C
#include <stdio.h>
#include <string.h>
int main(){
    int points[10][10]={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}

    };

    int t;
    scanf("%d",&t);
    while(t--){
        char A[10][11];
        for(int i=0;i<10;i++){
            scanf("%s",A[i]);
        }
        int ans=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(A[i][j]=='X'){
                    ans+=points[i][j];
                }
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}