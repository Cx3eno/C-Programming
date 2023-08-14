#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter the age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);

    if (age >= 19)
    {
        printf("You are eligible for voting!");
    }

    else if (age >= 13)
    {
        printf("You are between the age of 13 and 19 to only vote for teens!");
    }

    else if (age >= 5)
    {
        printf("You are between the age of 5 and 13 to only vote for kids!");
    }

    else
    {
        printf("You are not eligible for voting!");
    }

    return 0;
}
