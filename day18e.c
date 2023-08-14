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
    // program to convert inches to meters
    float inches;

    printf("Enter the value in inches: ");
    scanf("%f", &inches);

    // formula to convert inches to meters
    float meters = inches / 39.37;

    // computed value in meters
    printf("The converted value to meters is %f", meters);

    return 0;
}
