#include <stdio.h>

int main()
{
    char opt;
    int a, b;
    int ipt;
    printf("Select the following operations:\n    1. Addition (+)\n    2. Subtraction (-)\n    3. Multiplication (*)\n    4. Division (/)\n");
    scanf("%c", &opt);

    if (opt == '1')
    {
        printf("You have selected: Addition (+)\n");
    }

    else if (opt == '2')
    {
        printf("You have selected: Subraction (-)\n");
    }

    else if (opt == '3')
    {
        printf("You have selected: Multiplication (*)\n");
    }

    else if (opt == '4')
    {
        printf("You have selected: Division (/)\n");
    }
    
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);
    
    switch (opt)
    {
    case '1':
        ipt = a + b;
        printf("Addition of %d and %d is: %d\n", a, b, ipt);
        break;
    
    case '2':
        ipt = a - b;
        printf("Subtraction of %d and %d is: %d\n", a, b, ipt);
        break;

    case '3':
        ipt = a * b;
        printf("Multiplication of %d and %d is: %d\n", a, b, ipt);
        break;

    case '4':
        if (b == 0)
        {
            printf("\n Divisor cannot be zero. Please enter another value.");
            scanf("%d", &b);
        }
        
        ipt = a / b;
        printf("Division of %d and %d is: %d\n", a, b, ipt);
        break;

    default:
        printf("Something is wrong!! Please check the options!");
        break;
    }   

    return 0;
}