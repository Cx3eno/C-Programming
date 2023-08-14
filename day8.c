#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;

    printf("Enter the age number:\n");
    scanf("%d", &age);

    printf("Enter your marks:\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;

        default:
            printf("Your marks are not 45");
            break;
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;

    default:
        printf("The age is not 3, 13, or 23");
        break;
    }

    return 0;
}
