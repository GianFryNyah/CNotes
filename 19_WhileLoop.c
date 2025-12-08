#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    // While Loop = Continue some code WHILE the condition remains true
    //              Condition MUST be true for us to enter While Loop
    //              It MUST end at some point

    /*
    The following While will run forever
    while(1 == 1){
        do something
    }
    */
   int number = 0;
   
   while(number <= 0){ //it checks first the condition
    printf("Enter a number greater than 0: ");
    scanf("%d", &number);
   }
   
   do{ //it checks as last the condition
    printf("Enter a number greater than 0: ");
    scanf("%d", &number);
   } while(number <= 0);

   char name[50] = "";
   getchar();
   fgets(name, sizeof(name), stdin);
   name[strlen(name)-1] = '\0'; //\0 is a null terminator character

   while(strlen(name) == 0){
    printf("Name cannot be empty!\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
   }

   printf("Hello %s!\n", name);

   bool isRunning = true;
   char response = '\0';

   while(isRunning){
    printf("You're playing a game\n");
    printf("Would you like to continue? Y/N: \n");
    scanf(" %c", &response);

    if(response != 'Y' && response != 'y'){
        isRunning = false;
    }
   }

   printf("You exit the game\n");

   return 0;
}