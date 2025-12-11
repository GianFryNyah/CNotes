#include <stdio.h>
#include <string.h>

//Recommended to read about: https://web.archive.org/web/20250417094758/https://sekrit.de/webdocs/c/beginners-guide-away-from-scanf.html

int main() {
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age:");
    scanf("%d",&age);

    printf("Enter your GPA:");
    scanf("%f",&gpa);

    printf("Enter your grade:");
    scanf(" %c",&grade);

    getchar();
    printf("Enter your full name:");
    fgets(name, sizeof(name), stdin);

    name[strlen(name) - 1] = '\0';

    printf("%d\n", age);
    printf("%.1f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    /*If something try to ACCESS UNASSIGNED declared variables (before
    values get assigned to them), unexpected behaviour may occur or 
    left-over values from precedent processes may be used instead:
    
    It's best practice to ASSIGN default-temporary values to variables
    just in case they get ACCESSED before assignments
    
    Input: scanf() (not recommended) and fgets() (it means File Get String) are
    the two common functions for taking input
    scanf() WILL STOP when ecountering any type of spaces character
    fgets() will take every character as long as the input space to
    allocated is correctly passed as an argument.*/
    
    return 0;
}