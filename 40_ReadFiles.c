#include <stdio.h>

int main(){

    // Read a file

    FILE *pFile = fopen("output.txt", "r");
    //when we open a file, when we're done with it,
    //we should close it
    char buffer[1024] = {0};
    
    if(pFile == NULL){
        printf("It wasn't possible to open the file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    fclose(pFile);

    printf("\n");
    return 0;
}