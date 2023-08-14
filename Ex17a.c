// Quick Quiz:
// Given two numbers a and b, add them, subtract them, and assign them to a and b using call by reference.

/*
a = 4
b = 3

after running the function, the values of a and b should be:
a = 7
b = 1
*/

// #include <stdio.h>

// void alpha_A(int *A)
// {
//     *A = 7;
// }

// void beta_B(int *B)
// {
//     *B = 1;
// }

// int main()
// {
//     int a = 4, b =3;
//     printf("The value of a is: %d\n", a);
//     printf("The value of b is: %d\n", b);
//     printf("The sum is = %d\n", a + b);
//     printf("The diff is = %d\n", a - b);
//     alpha_A(&a);
//     beta_B(&b);

//     return 0;
// }

// #include <stdio.h>

// void letter_A(int *a)
// {
//     *a = 67;
// }

// void letter_B(int *b)
// {
//     *b = 98;
// }

// int main()
// {
//     int a =45, b = 22;
//     printf("The value of 'a' is = %d\n", a);
//     printf("The value of 'b' is = %d\n", b);
//     printf("The value sum is now = %d\n", a + b);
//     printf("The value difference is now = %d\n", a - b);
//     letter_A(&a);
//     letter_B(&b);

//     return 0;
// }

#include <stdio.h>

void gojou_satoru(float *address_A)
{
    *address_A = 9.9;
}

void kaneki_ken(float *address_B)
{
    *address_B = 4.9;
}

int main()
{
    float a = 5.8, b = 8.8;
    printf("The value of 'a' is = %.2f\n", a);
    printf("The value of 'b' is = %.2f\n", b);
    printf("The value sum is now = %.2f\n", a + b);
    printf("The value difference is now = %.2f\n", a - b);
    gojou_satoru(&a);
    kaneki_ken(&b);

    return 0;
}