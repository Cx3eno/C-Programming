#include<stdio.h>

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
    // convert kgs to pounds(lbs)
    // pounds is also known as lb or lbs
    float kilograms;

    printf("Enter the value in kilograms: ");
    scanf("%f", &kilograms);

    // formula to convert kgs to pounds(lbs)
    // kilogram = pound * 0.453592;
    // pound(lbs) = kilogram * 2.20462;
    // pound(lbs) / 2.20462 = kilogram;
    // kilogram = pound / 2.20462;
    float pounds = kilograms * 2.20462;

    // computed value in pounds
    printf("The converted value to pounds is %f = %f", pounds, kilograms);
    
    return 0;
}
