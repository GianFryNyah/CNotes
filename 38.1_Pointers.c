#include <stdio.h>

int main(void){
    return 0;
    /*
    ADDRESS (int)   VALUE  
    0X1000          0x4         int x = 4;
    0X1004          0x1000      int *pX = &x; ("Integer pointer named pX is set to the address of x")
    0X1008
    0X100C          0x4         int y = *pX; (When used without a type, * is used as to dereference a certain address, accessing the pointed value)
                                             ("Integer named y is set to the value pointed to by pX")
      ...
    
    A pointer is a variable holding an address to a certain memory allocation
    * define a pointer-type of variable
    & ( spelled 'amperson' ) refers to the memory address of a certain variable
    int x = 4; &x will refers to the memory address that contains the value 4
    int *x; is a pointer-type integer that contains memory addresses pointing to integer values ( to be specified )
    int **x; same as before but the pointer contains another pointer, and so on depending on how many * there are

    */
}