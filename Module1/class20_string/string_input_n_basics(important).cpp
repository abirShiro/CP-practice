#include <stdio.h>
int main(){
    char A[6];
    scanf("%s",A); //don't need & here because the & refers to the memory address, for string it refers to the first index of memory address by default
    printf("%s\n",A);

    return 0;
}

// if we did A[20] and write apple as input, after apple there is a null character apple\0  , this tells how much size was occupied by input. Takes input until there's a space or a new line (to make sure only a single string is taken as input)
//if we take input as index, we have to take like this
/*A[0]=a
A[1]=p
A[2]=p
A[3]=l
A[4]=e
A[5]=\0*/

//so the minimum size we could have taken was A[6]