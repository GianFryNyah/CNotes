#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;    // &a = address of a
    printf("a = %d\n",a);
    *p = 17;        // dereferencing
    printf("a = %d\n", a);

    // POINTER ARITHMETIC
    printf("Address p is %d\n", p);
    printf("Size of int is %d bytes\n", sizeof(int));
    printf("Address p is %d\n", p+1); // p+1 is p + 4 bytes
    // you can reach any memory location
    // but unless defined they'll contains garbage values
    // this leads to Undefined behaviours

    // int* --> int
    // char* --> char
    // pointer is a Strong Types, never a Generic Types

    *p = 1025;
    char *pp;
    pp = (char*)p;
    printf("Size of char is %d\n", sizeof(char));
    printf("Address = %d, value = %d\n",pp, *pp);
    printf("Address = %d, value = %d\n",pp+1,*(pp+1));
    // 1025 = 00000000 00000000 00000100 00000001
    //               0        0        4        1

    //VOID POINTER - Generic Pointer
    void *p0;
    p0 = p;
    printf("Address = %d\n", p0); // it's not possible to dereference nor to perform arithmetic operations on them

    //POINTER TO POINTER
    //int a = 10;
    //int *p = &a;
    *p = 6;
    int **q = &p;
    int ***qq = &q;
    printf("%d\n", *p); // 6
    printf("%d\n", *q); // Address contained in p
    printf("%d\n", *(*q)); // 6 ( dereferenced pointer p )
    printf("%d\n", *(*qq)); // Address contained in p
    printf("%d\n", *(*(*qq))); // 6
    ***qq = 10;
    printf("x = %d\n", a);
    **q = *p + 2;
    printf("x = %d\n", a); // Expected 12
}