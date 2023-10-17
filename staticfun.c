#include <stdio.h>

#include "D:\Workspace\functions\fun.c"

int fun(int,int);

int main(){

    int sum = fun(3,5);
    printf("%d",sum);
    return 0;
}

// the program should produce an error because we are using static keyword infront of function.