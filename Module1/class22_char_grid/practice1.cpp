//problem link: https://atcoder.jp/contests/abc296/tasks/abc296_b
#include<stdio.h>
#include<string.h>
int main(){
    char A[8][9];
    for(int i=0;i<8;i++){
        scanf("%s",A[i]);
    }
    int r,c;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(A[i][j]=='*'){
                r=i,c=j;
            }
        }
    }
    printf("%c%d\n",(char)(c+97),8-r);
    return 0;
}