//problem: https://codeforces.com/problemset/problem/304/A
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int a=1;a<=n;a++){
        for(int b=a+1;b<=n;b++){
            int c = sqrt(a*a+b*b);
            if(c<=n && c*c==a*a+b*b){
                ans+=1;
        }
    }}
    printf("%d",ans);
    return 0;
}