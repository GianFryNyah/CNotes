#include <stdio.h>
//everything outside every {} is on GLOBAL SCOPE
//{ this is a LOCAL SCOPE }
//variable declared on Global Scope are accessible for every local scope

int add(int x, int y){ //this is the start of a variable scope
    int result = x + y;
    return result;
} //this is the end of a variable scope

int subtract(int x, int y){
    int result = x - y;
    return result;
}

int main(){
    // Variable Scope = Refers to where a variable is recognized and accessible.
    //                  Variables can share the same name if they're in different scopes {}

    //int result = 0;
    //int result = 1;
    //as above will lead to an error
    int x = 5;
    int y = 6;

    int result = subtract(x, y);
    printf("%d\n", result);
    return 0;
}