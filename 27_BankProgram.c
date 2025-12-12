#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    //BANK PROGRAM

    int choice = 0;
    float balance = 0.0f;

    printf("*** Welcome to Inkulia Bank! ***");

    do{
        printf("\nSelect an option:\n");
        printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("\nPlease enter your choice: ");
        char buff[2];
        int success;

        do// INPUT HANDLER (strtol())
        {
            if(!fgets(buff, 2, stdin)){
                return 1;
            }
            char *endptr;
            choice = strtol(buff, &endptr, 10);
            if(endptr == buff){
                success = 0;
            }
            else if(*endptr && *endptr != '\n'){
                success = 0;
            }
            else{
                success = 1;
            }
        } while (!success);

        switch (choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using the bank!\n");
                break;
            default:
                printf("\nInvalid choice, please select 1 - 4\nchoice typed: %d", choice);
        }
    }while(choice != 4);

    return 0;
}

void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
}
float deposit(){
    float amount = 0.0f;
    char buff[256];
    int success;
    printf("\nEnter amount to deposit: $");
    do// INPUT HANDLER (strtof())
        {
            if(!fgets(buff, 256, stdin)){
                return 1;
            }
            char *endptr;
            amount = strtof(buff, &endptr);
            if(endptr == buff){
                success = 0;
            }
            else if(*endptr && *endptr != '\n'){
                success = 0;
            }
            else{
                success = 1;
            }
        } while (!success);
    if (amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("You've successfully deposited $%.2f\n", amount);
        return amount;
    }
}
float withdraw(float balance){
    float amount = 0.0f;
    char buff[512];
    int success;
    printf("\nEnter amount to withdraw: $");
    do//INPUT HANDLER (strtof())
    {
        if(!fgets(buff, 512, stdin)){
            return 1;
        }
        char *endptr;
        amount = strtof(buff, &endptr);
        if (endptr == buff){
            success = 0;
        }
        else if (*endptr && *endptr != '\n'){
            success = 0;
        }
        else{
            success = 1;
        }
    } while (!success);
    if (amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else if (amount > balance){
        printf("Insufficient funds!");
        return 0.0f;
    }
    else{
        printf("You've successfully withdrew $%.2f\n", amount);
        return amount;
    }
    return 0.0f;
}