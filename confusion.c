#include <stdio.h>
int i;
void fun();
int main(){

    i = 10;
    printf("%d\n",i);
    fun();
    return 0;
}

void fun(){
    i =  34;
    printf("%d",i);
}