#include <stdio.h>

int main() {
    // switch = Alternative to using many if-else statement
    //          more efficient with fixed int values
    int dayOfWeek = 0;
    printf("Enter day of week (1-7): ");
    scanf("%d", &dayOfWeek);

    switch(dayOfWeek){
        case 1:
        printf("It's Monday\n");
        break;
        case 2:
        printf("It's Tuesday\n");
        break;
        case 3:
        printf("It's Wednesday\n");
        break;
        case 4:
        printf("It's Thursday\n");
        break;
        case 5:
        printf("It's Friday\n");
        break;
        case 6:
        printf("It's Saturday\n");
        break;
        case 7:
        printf("It's Sunday\n");
        break;
    }
    return 0;
}