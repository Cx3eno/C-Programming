#include <stdio.h>
/* height and width of a rectangle in inches */

int width;
int height;

int area;
int perimeter;

int main(int argc, char const *argv[])
{
    height = 7;
    width = 5;

    perimeter = 2 * (height + width);
    printf("The perimeter of the rectangle = %d inches\n", perimeter);

    area = height * width;
    printf("The area of the rectangle = %d square inches\n", area);

    return 0;
}
