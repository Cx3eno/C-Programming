#include <stdio.h>

int main(int argc, char const *argv[])
{
    // program to convert yards to inches
    float yards, inches;

    printf("Please enter a value of yards: ");
    scanf("%f", &yards);

    // formula to convert yards to inches
    inches = yards * 36;

    // computed value in inches
    printf("The converted value to inches is %f", inches);

    return 0;
}
