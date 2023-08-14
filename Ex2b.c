// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int subject;
    printf("Select the serial no. of subjects which aced passed in\n"
           "1. Maths and Science\n"
           "2. Science\n"
           "3. Maths\n");

    scanf("%d", &subject);

    if (subject == 1)
    {
        printf("You have distributed 45 bucks as gifts to Maths and Science students");
    }

    else if (subject == 2)
    {
        printf("You have distributed 15 bucks as gifts to Science students");
    }

    else if (subject == 3)
    {
        printf("You have distributed 15 bucks as gifts to Maths students");
    }

    else
    {
        printf("Your gifts are insufficient");
    }

    return 0;
}
