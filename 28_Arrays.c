#include <stdio.h>

int main(){
    // Array = Fixed-size collection of elements of the same data type
    //         (Similar to a variable, but it holds more than one value)

    int numbers[] = {10, 20, 30, 40, 50};
    char grade[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Giacomino Guardiano delle Galassie e dell'Iperspazio";
    printf("%d\n", numbers[0]); //It'll display 10
    printf("%d\n", numbers[2]); //It'll display 30
    //printf("%d\n", numbers[7]); //undefined behaviour

    int init = 100;
    for (int n = 0; n < 5; n++) {
        init -= 10;
        numbers[n] = init;
    }

    printf("Array numbers\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }

    printf("\nArray 'numbers' takes %lu bytes of memory", sizeof(numbers));
    printf("\nElement value 'numbers[0]' takes %lu bytes of memory\n", sizeof(numbers[0]));

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("%d ", numbers[i]);
    }
    getchar();
    return 0;
}