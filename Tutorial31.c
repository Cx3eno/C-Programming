// #include <stdio.h>

// void changeValue(int *address) // *a stores the address of &a
// {
//     *address = 37565;
// }

// int main()
// {
//     int a = 34, b = 56;
//     printf("The value of a now is %d\n", a);
//     changeValue(&a); // &a address is passed into *a
//     printf("The value of a now is %d\n", a);
//     return 0;
// }

// Quick Quiz:
// Given two numbers a and b, add them, subtract them, and assign them to a and b using call by reference.

/*
a = 4
b = 3

after running the function, the values of a and b should be:
a = 7
b = 1
*/


#include <stdio.h>

void alteredVal(int *addr)
{
    *addr = 30;
}

int main()
{
    int x = 5, y = 15;
    printf("The value of a row is %d\n", x);
    alteredVal(&x);
    printf("The value of a row is %d\n", x);

    printf("The value of a column is %d\n", y);
    alteredVal(&y);
    printf("The value of a column is %d\n", y);

    return 0;
}