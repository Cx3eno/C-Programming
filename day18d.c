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
    // program to convert pound to kgs
    // pounds is also known as lb or lbs
    float pounds;

    printf("Enter the value in pound: ");
    scanf("%f", &pounds);

    // formula to convert pound to kgs
    // kilogram = pound * 0.453592;
    // pound(lbs) = kilogram * 2.20462;
    // pound(lbs) / 2.20462 = kilogram;
    // kilogram = pound / 2.20462;
    float kilograms = pounds / 2.20462;

    // computed value in kilograms
    printf("The converted value to kilograms is %f = %f", kilograms, pounds);

    return 0;
}
