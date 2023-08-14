#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h, age;
    printf("Hello Developer\n");
    for (h = 0; h < 16; h++)
    {
        printf("%d\nEnter the age\n", h);
        scanf("%d", &age);

        // if (age > 15)
        // {
        //     break;
        // }

        // Additional statements in for loop
        if (age > 15)
        {
            continue;
        }

        // these lines will be executed if continue statement does not meet its requirements
        printf("we have not come across any continue statements");
        printf("we have not come across any continue statements");
        printf("we have not come across any continue statements");
        printf("we have not come across any continue statements");
        printf("cx3eno is a good boy");
    }

    return 0;
}
