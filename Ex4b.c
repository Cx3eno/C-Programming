#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    float fahrenheit, celsius;

    printf("Enter the temperature in celsius:\n");
    scanf("%f\n", &celsius);

    fahrenheit = ((celsius * 9) / 5) + 32;
    printf("\nTemperature in fahrenheit is: %f", fahrenheit);

    return 0;
}
