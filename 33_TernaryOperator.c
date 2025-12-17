#include <stdio.h>
#include <stdbool.h>

int main() {
    // Ternary Operator ? = shorthand for if-else statements
    // (condition) ? value_if_true : value_if_false;

    int x = 5;
    int y = 6;
    int max = (x > y) ? x : y;
    
    printf("%d is the greatest value between %d and %d\n", max, x, y);

    bool isOnline = true;

    printf("%s", (isOnline) ? "Online\n" : "Offline\n");

    int number = 9;

    printf("%d is %s", number, (number % 2 == 0) ? "even\n" : "odd\n");

    int age = 24;

    printf("%s\n", (age >= 18) ? "adult\n" : "child\n");

    int hours = 11;
    int minutes = 3;
    char *meridiem = (hours < 12) ? "AM\n" : "PM\n";

    printf("%02d:%02d %s", hours, minutes, meridiem);
    
    return 0;
}