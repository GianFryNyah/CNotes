#include <stdio.h>

int summatory(int array[], int n);

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(array) / sizeof(array[0]);
    printf("The summatory of values between 0 and 10 is %d\n", summatory(array, n));
}

int summatory(int array[], int n){
    
    //Base case
    if(n == 0){return 0;}
    else{
        return(summatory(array, n-1) + array[n-1]);
    }
}