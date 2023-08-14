#include <stdio.h>

/*
Challenge Accepted!

-> kms to miles
-> inches to foot
-> cms to inches
-> pound(lbs) to kgs
-> inches to meters

*/

int main(int argc, char const *argv[])
{
    // program to convert cms to inches
    float centimeters;

    printf("Enter the value in centimeters: ");
    scanf("%f", &centimeters);

    // cms to inches formula
    float inches = centimeters / 2.54;

    // computed value in inches
    printf("The converted value to inches is %f", inches);

    return 0;
}
