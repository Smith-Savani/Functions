#include <stdio.h>

// char printA();

int main(){

    char a = printA();
    printf("%c",a);
    return 0;
}

char printA(){
    return 'a';
}

/*conflicting type :- because we did not define or declare function the compiler implicitly assumes that return type of this function is int 
when the flows goes to function it's returning type is char so it conflicts with what compiler assumed 
*/
