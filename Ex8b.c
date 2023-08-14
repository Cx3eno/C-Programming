#include <stdio.h>

int main(int argc, char const *argv[])
{
    float length, width, perimeter;

    printf("Enter the length of Rectangle = \n");
    scanf("%f", &length);

    printf("Enter the width of Rectangle = \n");
    scanf("%f", &width);

    /* Perimeter of Rectangle = 2 x (Length + Width) */
    perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle = %0.4f\n", perimeter);

    return 0;
}
