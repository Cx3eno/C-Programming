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
    // program to convert meters to inches
    float meters;

    printf("Enter the value in meters: ");
    scanf("%f", &meters);

    // formula to convert meters to inches
    float inches = meters * 39.37;

    // computed value in inches
    printf("The converted value to inches is %f", inches);

    return 0;
}
