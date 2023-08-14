#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        // since factorial(0) is 1 and factorial(1) is also 1
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    printf("Welcome Developer!\n");
    // define a number
    int num;
    printf("Enter the number you want the factorial of\n");
    // pass the address of the num in which user has taken the number as an input through keyboard
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}
