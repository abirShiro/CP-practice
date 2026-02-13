//https://codeforces.com/contest/1560/problem/A
//https://drive.google.com/file/d/1lWpzNfV95t3G28nlVmuCCAmlQHY5kDcO/view
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count;
        count = 1;
        scanf("%d",&n);
        for(int i=1; ;i++){ //removing the condition runs the loop infinitely
            if(i%10==3 || i%3==0){
                continue;
            }
            if(count == n){
                printf("%d\n",i);
                break;
        }
            count ++;
        }
        
    }
}