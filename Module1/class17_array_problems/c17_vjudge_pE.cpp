// prob link: https://atcoder.jp/contests/abc297/tasks/abc297_a
#include<stdio.h>
int main(){
    int n,d;
    scanf("%d%d",&n,&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=-1;
    for(int i=0;i<n-1;i++){
        if( arr[i+1] - arr[i] <=d){
            ans = arr[i+1];
            break;
        }
        
    }
    printf("%d\n",ans);
    return 0;

}