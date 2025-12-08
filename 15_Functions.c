#include <stdio.h>
#include <string.h>

// Function: Reusable section of code that can be invoked "called"
//           Arguments can be sent to a function so that it can use them

void happyBirthday(char name[], int age){
    printf("Happy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main(){
    char nominative[20] = "";
    int yearsOfLive = 0;

    printf("Enter your name: ");
    fgets(nominative, sizeof(nominative), stdin);
    nominative[strlen(nominative) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &yearsOfLive);

    happyBirthday(nominative, yearsOfLive);
    return 0;
}