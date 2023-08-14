#include <stdio.h>
#define PI 3.14

/* this is a multi-line comment;

and it is ignored by the compiler.

*/

// single-line comment;

int main(int argc, char const *argv[])
{
    int a = 4;
    const float b = 8.5;
    // PI = 5.666; cannot do that, it is wrong since PI is a constant
    printf("tab character is \t\t my backslash is \a %f", PI);
    // b = 5.666; cannot do that, it is wrong since b is a constant
    // printf("Hello World!\n");
    // printf("The value of a is: %6.5d!\n", a);
    // printf("the value of b is: %10.5f!\n", b);
    // printf("%18.5f   this\n", b);

    return 0;
}
