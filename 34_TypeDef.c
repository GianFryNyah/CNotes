#include <stdio.h>

typedef int Number;
//typedef char* String;
typedef char String[50];

int main() {
    // typedef = is a reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complext types and improves code readability

    // typedef existing_type new_name;

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d\n", z);

    String name = "Giovanni Il Gianfriddo\n";
    printf("%s", name);

    return 0;
}