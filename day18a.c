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
    // kilometers to miles program
    float kilometers;

    printf("Please enter kilometers: ");
    scanf("%f", &kilometers);

    // formula to convert kilometers to miles
    float miles = kilometers / 1.6;

    // computed value in miles
    printf("%f Miles", miles);

    return 0;
}
