#include <stdio.h>

int main(){
    // break = Break out of a loop
    // continue = Skip current cycle of a loop

    for(int i=1; i<=10; i++){
        if(i==4){
            break;
            //continue;
        }
        printf("%d\n", i);
    }
}