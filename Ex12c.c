#include <stdio.h>

/*
Challenge Accepted!

-> miles to kms
-> feet to inches
-> inches to cms
-> kgs to pounds(lbs)
-> meters to inches

*/

int main(int argc, char const *argv[])
{
    // convert inches to cms
    float inches;

    printf("Enter the value in inches: ");
    scanf("%f", &inches);

    // formula for inches to cms
    float centimeters = inches * 2.54;

    // computed value in centimeters
    printf("The converted value to centimeters is %f", centimeters);

    return 0;
}
