// problem link: https://cses.fi/problemset/task/1083/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n-1]; //since one value is missing
    int freq[n+1]={}; //n+1 since the highest value can be n , always remember to n+1 by default
    for(int i=0; i<n-1;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    int ans;
    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            int ans=i;
            break; //stop as soon as you find one
        }
    }
    printf("%d\n",ans);
    return 0;
}