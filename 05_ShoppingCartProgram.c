#include <stdio.h>
#include <string.h>

int main() {
    // Final ShoppingCart ProgramTM
    // by GianfriddoEvilCorporation

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s's\n", quantity, item);
    printf("The total is: %c%.2f\n", currency, total);
    /*
    On zsh (ZShell, Unix bash, usually MacOS)
    a percentage '%' sign will be placed at the end
    of a program's console output if it doesn't
    end with a newline/linefeed character ('\n') 
    */

    return 0;
}