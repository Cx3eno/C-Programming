#include <stdio.h>

int main(int argc, char const *argv[])
{
    int z;
    printf("Enter the multiplication as the desired input: \n");
    scanf("%d", &z);
    printf("The multiplication table of %d is as follows: \n", z);

    // printf("%d X 1 = %d\n", z, z * 1);
    // printf("%d X 2 = %d\n", z, z * 2);
    // printf("%d X 3 = %d\n", z, z * 3);
    // printf("%d X 4 = %d\n", z, z * 4);
    // printf("%d X 5 = %d\n", z, z * 5);
    // printf("%d X 6 = %d\n", z, z * 6);
    // printf("%d X 7 = %d\n", z, z * 7);
    // printf("%d X 8 = %d\n", z, z * 8);
    // printf("%d X 9 = %d\n", z, z * 9);
    // printf("%d X 10 = %d\n", z, z * 10);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d X %d = %d\n", z, i, z * i);
    // }

    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", z, i, z + i);
    }

    return 0;
}
