#include <stdio.h>

int main(int argc, char const *argv[])
{
    float length, width, area;

    printf("Enter the length of the rectangle = \n");
    scanf("%f", &length);

    printf("Enter the width of the rectangle = \n");
    scanf("%f", &width);

    /* Area of the Rectang;e = Length x Width */
    area = length * width;
    printf("The area of the rectangle = %0.4f\n", area);

    return 0;
}
