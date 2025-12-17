#include <stdio.h>

enum Day{
    SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
    //if not specified, the first element is equal to 0 and
    //the following element will be equal to 0+1, and so on
};
//it could be combined with typedef
//  typedef enum{...}Day;

typedef enum{
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status);

int main() {

    // enum = A User-defined data type that consists
    //        of a set of named integer costants.
    //        it replaces numbers with readable name

    // SUNDAY = 0;
    // MONDAY = 1;
    // TUESDAY = 2;

    enum Day today = MONDAY;

    if(today == SUNDAY || today == SATURDAY){
        printf("It's the weekend!\n");
    }
    else{
        printf("It's a weekday.\n");
    }

    printf("%d\n", today);
 
    Status status = SUCCESS;
    connectStatus(status);

    return 0;
}

void connectStatus(Status status){
    switch(status){
        case SUCCESS:
            printf("Connection was successfull!\n");
            break;
        case FAILURE:
            printf("Could not connect\n");
            break;
        case PENDING:
            printf("Connecting...\n");
            break;
    }
}