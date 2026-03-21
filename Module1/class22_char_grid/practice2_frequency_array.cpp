//problem: https://codeforces.com/contest/1915/problem/B
#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char arr[3][4];
        for(int i=0;i<3;i++){
            scanf("%s",arr[i]);
        }

        int F[3];
        for(int i=0;i<3;i++){
            F[i]=0;
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[i][j]!='?'){
                    int ind = arr[i][j]-65;
                    F[ind]++;
                }
            }
        }
        if(F[0]==2){
            printf("A\n");
        }
        else if(F[1]==2){
            printf("B\n");
        }
        else{
            printf("C\n");
        }
    }
    return 0;
}
