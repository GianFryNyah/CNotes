#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); //FUNCTION PROTOTYPE
bool ageCheck(int age); //FUNCTION PROTOTYPE

int main(){
    // Function Prototype = Provide the compiler with information abount a function's:
    //                      name, return type, and parameters before its actual definition.
    //                      Enables type checking and allows functions to be used before
    //                      they're defined.
    //                      It improves readability, organization and helps preventing errors.
    hello("PorcoDio", 666);

    if(ageCheck(666)){
        printf("You're old enough to swear God, Dio Cane!\n");
    }
    else{
        printf("Go to the nearest church as soon as possible!\n");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You're %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;
}