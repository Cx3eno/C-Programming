#include <stdio.h>

// main code starts from here
int main(int argc, char const *argv[])
{
    /* code */

    // initialising the variables
    int car;
    int age;
    
    // using of printf and scanf function starts
    printf("Enter the number of cars bought:\n");
    scanf("%d", &car);

    printf("Enter the number of age:\n");
    scanf("%d", &age);

    // to use switch case
    switch (car)
    {
    case 35:
        printf("Number of cars sold is 35\n");

        // nested switch case
        switch (age)
        {
        case 25:
            printf("The number of your age is 25\n");
            break;

        default:
            printf("Age requirement not met!\n");
            break;
        }
        break;

    case 40:
        printf("Number of cars sold is 40\n");

        // nested switch case
        switch (age)
        {
        case 30:
            printf("The number of your age is 30\n");
            break;

        default:
            printf("Age requirement not met!\n");
            break;
        }
        break;

    case 45:
        printf("Number of cars sold is 45\n");

        // nested switch case
        switch (age)
        {
        case 35:
            printf("The number of your age is 35\n");
            break;

        default:
            printf("Age requirement not met!\n");
            break;
        }
        break;

    default:
        printf("Number of cars sold is 0\n");
        break;
    }
    return 0;
}
