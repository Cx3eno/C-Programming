/* To build a calculator */

#include <stdio.h>

int main()
{
    // declaration of variables
    char opt;
    int n1, n2;
    float res;

    printf("Choose an operator(+, -, *, /) to perform the operation in C Calculator\n");
    scanf("%c", &opt); // take an operator

    if (opt == '+')
    {
        printf("You have selected: Addition");
    }

    else if (opt == '-')
    {
        printf("You have selected: Subtraction");
    }

    else if (opt == '*')
    {
        printf("You have selected: Multiplication");
    }

    else if (opt == '/')
    {
        printf("You have selected: Divsion");
    }
    
    printf("\nEnter the first number: ");
    scanf("%d", &n1);
    printf("\nEnter the second number: ");
    scanf("%d", &n2);
    
    switch (opt)
    {
    case '+':
        res = n1 + n2; // adding two numbers
        printf("Addition of %d and %d is: %.2f", n1, n2, res);
        break;

    case '-':
        res = n1 - n2; // subtracting two numbers
        printf("Subtraction of %d and %d is: %.2f", n1, n2, res);
        break;

    case '*':
        res = n1 * n2; // multiplying two numbers
        printf("Multiplication of %d and %d is: %.2f", n1, n2, res);
        break;
    
    case '/':
        if (n2 == 0) // if n2 == 0, take another number
        {
            printf("\n Divisor cannot be zero. Please enter another value");
            scanf("%d", &n2);
        }
        
        res = n1 / n2; // dividing two numbers
        printf("Division of %d and %d is: %.2f", n1, n2, res);
        break;

    default: /* use default to print default message if any condition is not satisfied*/
        printf("Something is wrong! Please check the options!");
        break;
    }

    return 0;
}