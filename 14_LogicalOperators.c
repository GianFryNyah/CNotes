#include <stdio.h>
#include <stdbool.h>

int main(){
    //Logical Operators: for combining or modify boolean expressions.
    // && = AND ; || = OR ; ! = NOT

    int temp = 51;

    if(temp >= 0 && temp <= 30){
        printf("The temperature is fine\n");
    }
    else{
        printf("The temperature is bad\n");
    }

    bool isSunny = true;

    if(!isSunny){
        printf("It's cloudy outside\n");
    }
    else{
        printf("It's sunny outside\n");
    }

    return 0;
}