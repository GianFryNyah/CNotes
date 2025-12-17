#include <stdio.h>

int main(){

    // Write a file

    FILE *pFile = fopen("/Users/gianfriddo/output.txt", "w");
    //when you're done modifying-writing a file
    //is good practice to close it
    char text[] = "Bestemmie Sante\nTesto blasfemo\nVolano Madonne";
    if(pFile == NULL){
        printf("Error, it's not possible opening the file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    fclose(pFile);

    return 0;
}