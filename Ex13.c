#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Welcome Coder!\n");

    // 1D Array Example:
    // int grades[7] = {9, 8, 7, 6, 5, 4, 3};

    // for (int i = 0; i < 7; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &grades[i]);
    // }

    // int marks[] = {3, 4, 6, 8, 7};
    // for (int l = 0; l < 5; l++)
    // {
    //     printf("The value of the %d element of the array is %d\n", l, marks[l]);
    // }

    // 2D Array Example:
    int num[2][7] = {{7, 36, 25, 44, 3, 42, 1},
                     {1, 22, 3, 34, 25, 6, 73}};

    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 7; k++)
        {
            // printf("The value of the %d, %d element of the array is %d\n", j, k, num[j][k]);
            printf("%d ", num[j][k]);
        }
        printf("\n");
    }

    // int marks[5];

    // marks[0] = 5;
    // printf("Marks of Student 1 in Maths is %d\n", marks[0]);
    // marks[1] = 15;
    // printf("Marks of Student 1 in Physics is %d\n", marks[1]);
    // marks[2] = 25;
    // printf("Marks of Student 1 in Chemistry is %d\n", marks[2]);
    // marks[3] = 35;
    // printf("Marks of Student 1 in Biology is %d\n", marks[3]);
    // marks[4] = 45;
    // printf("Marks of Student 1 in English is %d\n", marks[4]);

    return 0;
}
