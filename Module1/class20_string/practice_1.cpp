//problem: https://atcoder.jp/contests/abc329/tasks/abc329_a
#include <stdio.h>
#include <string.h>
int main(){
    char C[101];
    scanf("%s",&C);
    int n = strlen(C);
    for(int i=0;i<n;i++){
        printf("%c",C[i]);
        if(i!=n-1){   //if not last element
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}