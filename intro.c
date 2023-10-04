#include <stdio.h>

int areaofRect(int l,int b)
{
    int area;
    area = l*b;
    return area;
}

int main()
{
    int l = 10,b = 34;
    int area = areaofRect(l,b);
    printf("%d",area);
    return 0;
}