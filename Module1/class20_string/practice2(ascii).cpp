//problem: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include <stdio.h>
#include <string.h>
int main(){
    char A[1000001];
    scanf("%s",&A);
    int sz = strlen(A);
    int sum=0;
    for(int i=0;i<sz;i++){
        sum+=(int)A[i]-48; //ascii for 0 is 48, 49 for 1, so minus 48 to get the int value
    }
    printf("%d\n",sum);
    return 0;
}