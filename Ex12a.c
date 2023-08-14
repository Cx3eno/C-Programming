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
    // program to convert miles to kms
    float miles;

    printf("Enter the value in miles: ");
    scanf("%f", &miles);

    // formula to convert miles to kms
    // 20 x 1.6 = 32 kms
    float kilometers = miles * 1.6;

    // computed value in kilometers
    printf("The converted value to kilometeres is %f", kilometers);

    return 0;
}
