//problem: https://codeforces.com/problemset/problem/514/A
#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    scanf("%s",c);
    int s = strlen(c);
    for(int i=0;i<s;i++){
        int d = c[i] - '0'; //turns it into an integer
        if(d<5){
            d = 9 - d;
            c[i] = d + '0';
        }
    }
    printf("%s\n",c);
    return 0;
}