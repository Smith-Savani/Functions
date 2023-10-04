#include <stdio.h>

char printA();

int main(){

    char a = printA();
    printf("%c",a);
    return 0;
}

char printA(){
    return 'a';
}