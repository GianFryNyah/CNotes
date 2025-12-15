#include <stdio.h>
#include <string.h>

int main() {
    // Array of Strings

    char fruits[][10] = {"Apple", "Banana", "Citrus"};

    char fruit[][10] = {
        {'A', 'p', 'p', 'l', 'e', '\0', '\0', '\0', '\0', '\0'},
        {'B', 'a', 'n', 'a', 'n', 'a', '\0', '\0', '\0', '\0'},
        {'C', 'i', 't', 'r', 'u', 's', '\0', '\0', '\0', '\0'}
    };

    char names[5][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i])-1] = '\0';
    }
    for (int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }
    // The two Arrays above are both conceptually the same thing

    //We can replace characters on strings as follow:
    //fruits[0][0] = 'e';
    //fruits[0][4] = 'A';

    int size = sizeof(fruits) / sizeof(fruits[0]);
    for (int i = 0; i < size; i++){
        printf("%s ", fruits[i]);
    }

    return 0;
}