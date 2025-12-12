#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(){
    //scan() is an highly risky and not recommended way
    //to handle user input, it leads frequaìently to undefied behaviour

    //as follow, some alternatives as fgets() and atoi()

    int num;
    char buf[1024]; // approximately 1Kb of memory

    do
    {
        printf("Enter a number: ");
        if (!fgets(buf, 1024, stdin)){
            // reading input failed, give up
            return 1;
        }

        // have some input, convert it to integer;
        num = atoi(buf);
    } while (num == 0); // repeat until we got a valid number;

    printf("The number you entered is %d.\n", num);
    // with that method we can't enter 0 for example
    // we can use strtol() that's better in error checking

    long num2;
    char buf2[1024]; // approximately 1Kb of memory
    int success; // flag for successful conversion

    do
    {
        printf("Enter a second number: ");
        if (!fgets(buf2, 1024, stdin))
        {
            // reading input22 failed:
            return 1;
        }
        //fgets(buf2, 1024, stdin);
        //have some input, convert it to integer
        char *endptr;

        errno = 0; // reset error number
        num2 = strtol(buf2, &endptr, 10);
        // long strtol() is a powerful alternative
        // endptr is set to POINT at the first character that couldn't be converted
        // with this we can check if the whole string was converted or not
        // the third argument is the base for parsing hexadecimal (16), binary (2) or decimal values (10)
        
        if (errno == ERANGE)//Error handling
        {
            printf("Sorry, this number is too small or too large.\n");
            success = 0;
        }
        else if (endptr == buf)
        {
            //no character was read
            success = 0;
        }
        else if (*endptr && *endptr != '\n')
        {
            // *endptr is neither end of string nor newline,
            // so we didn't convert the *whole* input
            success = 0;
        }
        else
        {
            success = 1;
        }
    } while (!success); // repeat until we got a valid number
    
    printf("You entered %ld.\n", num2);
    return 0;
}
// strtod() --> convert a character string to a double
// strtof() --> convert a character string to a float
// strtold()--> convert a character string to a long double
// strtol() --> convert a character string to a long int
// strtoll()--> convert a character string to a long long int