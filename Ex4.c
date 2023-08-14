#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 0;
    printf("Hello Developer\n");
    printf("Enter the Odd number:\n");
    scanf("%d", &num);
    printf("Odd numbers counting from 1 to %d is\n", num);
    do
    {
        index = index + 1;
        if (index % 2 == 0)
        {
            continue;
        }
        printf("%d\n", index);
    } while (index < num);

    printf("The above table is a multiplication of %d");

    return 0;
}
