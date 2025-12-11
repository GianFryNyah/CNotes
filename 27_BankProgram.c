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
    int balance = 0.0f;

    printf("*** Welcome to Inkulia Bank! ***");

    do{
        printf("\nSelect an option:\n");
        printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("\nPlease enter your choice: ");
        scanf("%d", &choice);
    }while(choice != 4);

    return 0;
}

void checkBalance(float balance){
    
}
float deposit(){
    return 0.0f;
}
float withdraw(float balance){
    return 0.0f;
}