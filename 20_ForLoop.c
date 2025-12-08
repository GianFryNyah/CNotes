#include <stdio.h>
//#include <windows.h> this is for Windows OS
#include <unistd.h> //this is for Linux/Mac OS

int main(){
    // For Loop = Repeat some code for a limited amount of times
    //            for(Initialization; Condition; Update)
    for(int i = 10; i >= 0; i--){
        // Sleep(1000); this is for Windows, number indicates milliseconds
        sleep(1);
        printf("%d\n", i);
    }
    sleep(1);
    printf("Happy New Year!!!\n");

}