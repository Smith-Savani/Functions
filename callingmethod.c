#include <stdio.h>

int fun1(int,int);
int fun2(int *ptr1,int *ptr2);

int main(){
    int x = 10,y=20;
    //call by value
    fun1(x,y);
    printf("x = %d y = %d\n",x,y);
    //call by refernce
    fun2(&x,&y);
    printf("x = %d y = %d",x,y);

    return 0;
}

int fun1(int x,int y)
{
    x = 20,y=10;
}
int fun2(int *ptr1,int *ptr2)
{
    *ptr1 = 20,*ptr2 = 10;
}