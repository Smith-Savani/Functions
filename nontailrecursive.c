#include <stdio.h>

 int fun(int n){

    if(n == 1)
        return 0;
    else
        return 1 + fun(n/2);

}


int main(){

    printf("%d",fun(8));
    return 0;
}

/*
It is a non tail recursive because when we return back to the funtion we still need to perform addition we still need to add 1 to the value
we get 
*/