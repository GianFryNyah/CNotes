#include <stdio.h>
#include <stdlib.h>

int InputHandlerInt(char buff[]);

int main(){
    // malloc() = A function in C that dynamically allocates
    //            a specified number of bytes in memory

    //char grades[5] = {0};
    //what if we don't know the number of elements we need
    //before the program running?

    int number = 0;
    printf("Enter the number of grades: ");
    char buff[64];
    number = InputHandlerInt(buff);

    char *grades = malloc(number * sizeof(char));

    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades); // returning the allocated space back to the OS
    grades = NULL; // avoids dangling pointers

    printf("\n");
    return 0;
}

int InputHandlerInt(char buff[]){
    char *endptr;
    if (!fgets(buff, 64, stdin)){
        return 1;
    }
    return strtol(buff, &endptr, 10);
}