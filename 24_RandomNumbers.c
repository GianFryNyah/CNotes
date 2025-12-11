#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Pseudo-Random = Appear random but are determined by a
    //                 mathematical formula that uses a seed value
    //                 to generate a predictable sequence of numbers.
    //                 advanced: Mersenne Twister or /dev/random
    srand(time(NULL)); //time as base seed
    printf("In this exercise we'll print pseudo-random numbers\n");

    printf("Casuale pseudo-number with rand() and time(NULL) as its base seed:\n");
    printf("%d\n", rand());

    printf("Maximum value of rand()\n");
    printf("%d\n", RAND_MAX);

    printf("Pseudo-random numbers between 0 and 1 ( using module operator between two integers )\n");
    int randomNum1 = rand() % 2;
    printf("%d\n", randomNum1);

    printf("Pseudo-random numbers between 1 and 2 ( using module operator between two integers )\n");
    int randomNum2 = (rand() % 2) + 1;
    printf("%d\n", randomNum2);

    printf("Pseudo-random numbers between two given number:\n");
    int min = 0;
    int max = 0;
    printf("Type the minimum value: ");
    scanf("%d", &min);
    printf("Type the maximum value: ");
    scanf("%d", &max);
    int randomNum3 = (rand() % (max - min + 1)) + min;
    printf("%d\n", randomNum3);

    return 0;
}