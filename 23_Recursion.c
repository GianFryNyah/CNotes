#include <stdio.h>

int recursivePow2(int n){ //Signature of the function
    if(n==0){ //BASE CASE - here the function should return a certain specific value and never recall the function itself
        return 1;
    }
    else{ //INDUCTIVE STEP - We invoke the function itself on a certain parameter/parameters that get modified in order to
          //                 be certain that at some point we'll get the base case scenario.
        return recursivePow2(n-1) * 2; //specifics of function f(n) = 2^n
    }
}

int iterativeForPow2(int n){
    int r = 1;
    for(int i=n-1; i>=0; i--){
        r *= 2;
    }
    return r;
}

int main(){
    int n = 0;
    printf("In this exercise we'll try different method to print 2^n for a given n natural value\n");
    printf("Please enter n: ");
    scanf("%d", &n);
    printf("n = %d\nRecursive function: %d\n", n, recursivePow2(n));
    printf("Iterative function with For method: %d\n", iterativeForPow2(n));
    //getchar();
    return 0;
}