#include <stdio.h>
#include <string.h>

int main(){
    //ImperialMesmerizingCandy
    
    char noun[15] = "";
    char verb[20] = "";
    char adjective1[20] = "";
    char adjective2[20] = "";
    char adjective3[20] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1)-1] = '\0';

    printf("Enter a noun (animal / person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2)-1] = '\0';

    printf("Enter a verb (-ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(verb)-1] = '\0';

    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);

    return 0;
}