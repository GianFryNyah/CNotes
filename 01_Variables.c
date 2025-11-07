#include <stdio.h>
#include <stdbool.h>

int main(){
    // variable = Reusable container for a certain value.
    //            Behaves as if it were the value it contains.

    int age = 24; // integer data type can't store decimals
                  // int age = 24.1; would lead to 24 if printed out
    int year = 2025;
    int quantity = 1;
    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    float gpa = 2.5;
    float price = 1299.99;
    printf("Your gpa is %f\n", gpa); // %.nf where n is an integer number specifies how many decimals character i want displayed
    printf("Your gpa is %.1f\n", gpa);
    printf("The price is $%.2f\n", price);

    //double data type allow storing more decimals characters
    double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825;
    printf("the value of pi is %lf\n", pi);
    printf("the value of pi is %.40lf\n", pi);

    char grade = 'A';
    char symbol = '!';
    printf("Your grade is %c\n", grade);
    printf("%c is a symbol\n", symbol);

    //In C we use an array of char data types values to represent string
    char name[] = "Giovanni";
    char food[] = "Sushi";
    printf("My name is %s\n", name);
    printf("Your favorite food is %s\n", food );

    //bool data type values aren't printed usually
    //they get int value 1 if True, 0 if False
    bool isOn = false;
    printf("%d\n", isOn);

    if(isOn){
        printf("You are Online!");
    }
    else{
        printf("You are Offline!");
    }

    return 0;
}

/*Recap
variable = Reusable container for a value.
           Behaves as if it were the value it contains
int = whole numbers (4 bytes in modern systems)
float = single-precision decimal number (4 bytes)
double = double-precision decimal number (8 bytes)
char = single character (1 byte)
char[] = array of characters (size may varies)
bool = true or false (1 byte, requires <stdbool.h> header)
char*/