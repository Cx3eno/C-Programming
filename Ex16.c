// Call by Reference: Example

// #include <stdio.h>

// /* function definition to swap the values */
// void swap(int *x, int *y)
// {
//     int temp; // temp variable

//     /* declaration and initialisation */
//     temp = *x; /* save the value of a at address x */
//     *x = *y;   /* store the value of y into x */
//     *y = temp; /* store the temp value into y */

//     return; // return
// }

// int main()
// {
//     int a = 34, b = 74;

//     printf("Output a = %d and b = %d\n", a, b);
//     /* values are now swapped */
//     swap(&a, &b); // function call by reference
//     printf("Output a = %d and b = %d\n", a, b);

//     return 0;
// }

/* Next example*/
#include <stdio.h>

void swap_2(int *a, int *b)
{
    int temp_2;

    temp_2 = *a;
    *a = *b;
    *b = temp_2;

    return;
}

int main()
{
    int x = 30, y = 50;

    printf("Output of x = %d and y = %d\n", x, y);
    swap_2(&x, &y);
    printf("Output of x = %d and y = %d\n", x, y);

    return 0;
}