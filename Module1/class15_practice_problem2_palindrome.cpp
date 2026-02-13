#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int x= 0;
    int m = n;
    while(n>0){            //for(int i = n; i>0; i/10);   then we don't need m as backup
        int y = n % 10;    
        x = x*10 +y;
        n = n/10;       
    }
    if(m == x){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
}