#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i*i<=n;i++){
        if(n%i==0){
            int x = i;
            int y = n/i;
            printf("%d %d\n",x,y);
        }

    }
    return 0;
}