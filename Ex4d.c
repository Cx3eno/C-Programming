#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius:\n");
    scanf("%f\n", &celsius);

    // Celsius to Fahrenheit conversion formula
    fahrenheit = (1.8 * celsius) + 32;

    // Result gets converted into Fahrenheit
    printf("The temperature in Fahrenheit is: %f", fahrenheit);

    return 0;
}
