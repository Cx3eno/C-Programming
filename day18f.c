#include <stdio.h>

int main(int argc, char const *argv[])
{
    // program to convert inches to yards
    float inches, yards;

    printf("Please enter the value in inches: ");
    scanf("%f", &inches);

    // formula to convert inches to yards
    yards = inches / 36;

    // computed value in yards
    printf("The converted value to yards is %f", yards);

    return 0;
}
