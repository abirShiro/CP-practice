#include <stdio.h>
#include <string.h>


void swap(char &x, char &y){

    char temp = x;
    x = y;
    y = temp;
}

void reverse(char s[]){

    int len = strlen(s);

    for(int i = 0, j=len-1; i<j; i++, j--){
        swap(s[i],s[j]);
    }
}

int palindrome(char s[]){
    int len = strlen(s);
    char temp[len+1];

    for(int i=0; i<len; i++){
        temp[i] = s[i];
    }
    reverse(temp);
    for(int i=0 ; i<len ; i++){
        if(temp[i]!=s[i]){
            return 0;
        }
    }
    return 1;  // c doesn't have bool type
}

int main(){
    char s[100];
    scanf("%s",&s);
    if(palindrome(s)){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}