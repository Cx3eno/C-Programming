// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int d;
    printf("Enter the scores of subjects:\n");
    printf("Enter 1 if passed Maths and Science\n");
    printf("Enter 2 if passed Science\n");
    printf("Enter 3 if passed Maths\n");

    scanf("%d", &d);

    if (d == 1 || d == 1)
    {
        printf("You have distributed 45 bucks to maths and science students");
    }

    else if (d == 2)
    {
        printf("You have distributed 15 bucks to science students");
    }

    else if (d == 3)
    {
        printf("You have distributed 15 bucks to maths students");
    }

    else
    {
        printf("You have distributed insufficient gifts");
    }

    return 0;
}
