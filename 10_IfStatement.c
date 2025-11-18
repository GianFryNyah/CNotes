#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    /*
    IF STATEMENT = Do some code if a condition is TRUE
                   If the condition is FALSE, don't do it
    */
   int age = 0;
   printf("Please, enter your age: ");
   scanf("%d", &age);

   if (age >= 65){
    printf("You're a senior\n");
   } //this condition is readed first, if true SKIP other else-if/else conditions
   else if(age >= 18){
    printf("You're a major\n");
   } //else with conditions
   else if(age < 0){
    printf("You haven't been born yet you silly!\n");
   }
   else if(age == 0){
    printf("You are a newborn\n");
   }
   else{
    printf("You're a child\n");
   } //do what else tells if every other conditions above are not true

   bool isStudent = true;

   if(isStudent){
    printf("You're a student\n");
   }
   else{
    printf("You're NOT a student\n");
   }

   char name[30] = "";

   printf("Enter your full name: ");
   getchar(); //for removing '\n' from the input buffer
   fgets(name, sizeof(name), stdin);
   name[strlen(name)-1] = '\0';

   if(strlen(name) == 0){
    printf("You didn't enter your name!\n");
   }
   else{
    printf("Hello %s!\n", name);
   }
   return 0;
}