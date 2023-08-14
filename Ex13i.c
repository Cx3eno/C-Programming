#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int matrix [2][3] = {{2, 4, 6}, {8, 2, 4}};

    // printf("%d ", matrix[0][2]);
    // printf("%d ", matrix[1][2]);

    // int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {2, 4, 6}};

    // printf("%d ", mat[0][2]); // =3
    // printf("%d ", mat[1][1]); // =5
    // printf("%d ", mat[2][1]); // =8
    // printf("%d ", mat[3][0]); // =2

    // int rix [3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {2, 4, 6, 8}};

    // printf("%d ", rix[0][1]); // =2
    // printf("%d ", rix[1][2]); // =7
    // printf("%d ", rix[2][3]); // =8
    // printf("%d ", rix[0][3]); // =4

    int vec[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 0, 1, 2}, {3, 4, 5, 6}};

    printf("%d ", vec[0][0]);
    printf("%d ", vec[0][1]);
    printf("%d ", vec[0][2]);
    printf("%d \n", vec[0][3]);
    printf("%d ", vec[1][0]);
    printf("%d ", vec[1][1]);
    printf("%d ", vec[1][2]);
    printf("%d \n", vec[1][3]);
    printf("%d ", vec[2][0]);
    printf("%d ", vec[2][1]);
    printf("%d ", vec[2][2]);
    printf("%d \n", vec[2][3]);
    printf("%d ", vec[3][0]);
    printf("%d ", vec[3][1]);
    printf("%d ", vec[3][2]);
    printf("%d \n", vec[3][3]);

    return 0;
}
