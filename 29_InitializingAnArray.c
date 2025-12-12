#include <stdio.h>
#include <stdlib.h>

int main(){
    int scores[5] = {0}; // sizes must be given

    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++){
        int g = i+1;
        printf("Enter the %d'th value of the array score: ", g);
        char buff[64];
        char *endptr;
        if (!fgets(buff, 64, stdin)){
        return 1;
        }
        scores[i] = strtol(buff, &endptr, 10);
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");

    return 0;
}