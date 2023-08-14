#include <stdio.h>

int main(int argc, char const *argv[])
{
    // printf("Welcome Developer!\n");
   
    // Example of 1D array
    // an array with size 4 whose name is marks
    // int marks[4] = {56, 5, 647, 24}; // this is called declaration with initialization

    // Example of 2D array
    // here in this step there are 2 rows and 4 columns
    int marks[2][4] = {{56, 5, 647, 24}, //[[0,0], [0,1], [0,2], [0,3]]
                       {4, 6, 8, 4}};    //[[1,0], [1,1], [1,2], [1,3] // this is called declaration with initialization

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i); // i will be stored in %d area
    //     scanf("%d", &marks[i]); // need to take the address of [i] to store the entered value in &marks[i]
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 4;
    // marks[1] = 24;
    // marks[2] = 34;
    // marks[3] = 44;
    // printf("Marks of student 1 is %d\n", marks[0]);

    return 0;

    // we create arrays so that we can access the items with a single name
}
