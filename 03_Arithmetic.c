#include <stdio.h>

int main(){
    // arithmetic operators = + - * / % ++ --

    int x = 9;
    int y = 4;
    int z = 0;

    z = x + y;
    printf("%d\n", z);

    z = x - y;
    printf("%d\n", z);

    z = x * y;
    printf("%d\n", z);

    z = x / y;
    printf("%d\n", z); // only the integer portion would be calculated
                       // output will be 2
    printf("%f\n", z); // with operands x and y as integer:
                       // output will be 0.000000 displaying integer z with float format specifier
                       // output will be 2.000000 displaying float z with float format specifier
                       // output will be 2 displaying integer z with integer format specifier
    
    // both operands z, x and y will need to be float for correct calculation
    float xx = 9;
    float yy = 4;
    float zz = 0;

    zz = xx / yy;
    printf("%.2f\n", zz);

    z = x % y; // that's called MODULE OPERATOR
    printf("%d\n", z);

    printf("%d\n", x);
    x--; // AUGMENTED ASSIGNMENT OPERATOR
         //  equals to x = x - 1
    printf("%d\n", x);
    x++; //  equals to x = x + 1
    printf("%d\n", x);
    x += 2; //  equals to x = x + 2
    x += 3; //  equals to x = x + 3
    x -= 5; //  equals to x = x - 5
    printf("%d\n", x);
    float xxx = x;
    xxx /= 4;
    printf("%f\n", xxx);
    x /= 3;
    printf("%d\n", x);
    // example on how data type affect output depending on format specifier used
    float h = 4;
    printf("%.f\n", h);
    int hh = 4;
    printf("%f\n", hh);
    // BASICS C ARITHMETIC OPERATORS
    // z, x and y data type are important
    // if we want to correctly display decimals value, operands have to be float type and float format specifiers have to be used in order to display the value
    // z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;
    // z = x % y;

    // AUGMENTED ASSIGNMENT OPERATORS
    // x+=3;
    // x-=3;
    // x*=2;
    // x/=2;
    return 0;
}