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
    // inches to foot program
    // feet - plural; foot - singular
    float inches;

    printf("Please enter in inches: ");
    scanf("%f", &inches);

    // formula to convert inches to foot
    float foot = inches / 12;

    // computed value in foot
    printf("The converted value in foot is %f", foot);

    return 0;
}
