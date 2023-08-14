#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Let's learn about pointers\n");

    // int a [garbage value];
    // int b [garbage value];

    // int a = 1; [assigned value]
    // int b = 2; [assigned value]

    // int a = 76; // variable whose value is 76
    // int *ptra = &a; // pointer which points to a which stores the address of a

    // printf("The address of pointer to a is %x\n", &ptra); // prints address in hexadecimal format
    // printf("The address of pointer to a is %d\n", *ptra); // prints address in integer format
    // printf("The value of a is %p\n", *ptra); // derefences ptra

    // printf("The address of pointer to a is %x\n", *ptra); // prints address in hexadecimal format
    // printf("The address of pointer to a is %d\n", *ptra); // prints address in integer format
    // printf("The value of a is %p\n", *ptra); // dereferences ptra

    // printf("The address of pointer to a is %x\n", &ptra); // prints address in hexadecimal format
    // printf("The address of pointer to a is %d\n", &ptra); // prints address in integer format
    // printf("The value of a is %p\n", &ptra); // prints address in hexadecimal format
    // printf("The value of a is %d\n", a);
    // printf("The value of a is %d\n", *ptra);
    // printf("The address of a is %p\n", &a);
    // printf("The address of a is %p\n", ptra);
    

    int b = 86;                                           // variable b whose value is 86
    int *ptrb = &b;                                       // ptrb is a pointer variable which has its own address &ptrb
    int *ptr2 = NULL;                                     // initialised with null value
    printf("The address of pointer to b is %p\n", &ptrb); // prints address of pointer to b
    printf("The address of b is %p\n", &b);               // takes the address of b through &b
    printf("The address of b is %p\n", ptrb);             // takes the address of b through ptrb
    printf("The value of b is %d\n", *ptrb);              // prints the value of b through pointer dereferencing
    printf("The value of b is %d\n", b);                  // prints the value of b
    printf("The address of some garbage value is %p\n", ptr2);  // prints garbage value of ptr2

    /* %p in c programming is used for pointer for printing through printf; is a format specifier
    if the programmer does not want to store any address to a variable is called null value */

    return 0;
}
