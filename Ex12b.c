#include <stdio.h>

/*
Challenge Accepted!

-> miles to kms
-> feet to inches
-> inches to cms
-> kgs to pounds (lbs)
-> meters to inches

*/

int main(int argc, char const *argv[])
{
    // program to convert feet to inches
    // feet - plural; foot - singular
    float feet;

    printf("Enter the value in feet: ");
    scanf("%f", &feet);

    // formula to convert feet to inches
    float inches = feet * 12;

    // computed value in inches
    printf("The converted value to inches is %f", inches);

    return 0;
}
