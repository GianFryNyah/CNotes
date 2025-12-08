#include <stdio.h>
#include <stdbool.h>

int main() {
    // CALCULATOR PROGRAM

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    bool ValidOperation = true;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator); // clear \n from input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2==0){
                ValidOperation = false;
                printf("You can't divide by 0!\n");
                break;
            }
            else{
                result = num1 / num2;
                break;
            }
            break;
        default:
            ValidOperation = false;
            printf("Invalid Operator\n");
            break;
    }

    if (ValidOperation){
        printf("Result is %.10lf\n", result);
    }

    return 0;
}