#include <stdio.h>
/*
Print a multiplication table of a number entered by the user in the pretty form.

Example:

Input:
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 x 1 = 6
6 x 2 = 12
.
.
.
6 x 10 = 60
*/

int main(int argc, char const *argv[])
{
    /* code */
    int a;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &a);

    printf("Table of \n");
    printf("%d x %d = %d\n", a, 1, a * 1);
    printf("%d x %d = %d\n", a, 2, a * 2);
    printf("%d x %d = %d\n", a, 3, a * 3);
    printf("%d x %d = %d\n", a, 4, a * 4);
    printf("%d x %d = %d\n", a, 5, a * 5);
    printf("%d x %d = %d\n", a, 6, a * 6);
    printf("%d x %d = %d\n", a, 7, a * 7);
    printf("%d x %d = %d\n", a, 8, a * 8);
    printf("%d x %d = %d\n", a, 9, a * 9);
    printf("%d x %d = %d\n", a, 10, a * 10);

    return 0;
}
