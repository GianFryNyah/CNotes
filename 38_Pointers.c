#include <stdio.h>

void birthday(int* age);

int main(){

    // Pointer = A variable that stores the memory address of another variable.
    //           They can help to avoid wasting memory by allowing you to pass
    //           the address of a large data structure instead of copying the entire data.
    // Savage Imperial Pizza Party Example Incoming

    int age = 24;
    int *pAge = &age;

    printf("%p\n ", pAge);

    birthday(&age);
    //birthday(pAge);
    printf("You are %d years old\n", age);
    return 0;
}

void birthday(int* age){
    // pass by value
    // age++;

    // pass by reference
    //*age++ would had incremented the actual address
    (*age)++;
}