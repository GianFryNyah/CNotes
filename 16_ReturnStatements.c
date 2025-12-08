#include <stdio.h>
#include <stdbool.h>

int getMax(int x, int y){
    if (x >= y){
        return x;
    }
    else{
        return y;
    }
}

bool ageCheck(int age){
    if (age >= 18){
        return true;
    }
    else{
        return false;
    }
}

double cube(double num){
    return num * num * num;
}

int square(int num){
    int result = num * num;
    return result;
    //return num * num;
}

int main(){
    // Return = returns a value back to where you call a function
    int x = square(2);
    int y = square(3);
    double z = cube(4.54897384375);

    printf("%d, %d, %lf\n", x, y, z);

    int age = 24;

    if(ageCheck(age)){
        printf("You may sign up\n");
    }
    else{
        printf("You're a child, practically a little baby\n");
    }

    int max = getMax(2, 5);
    printf("%d is the max value\n", max);

    return 0; // it serves as an EXIT CODE ( return 0; --> EXIT_SUCCESS )
}