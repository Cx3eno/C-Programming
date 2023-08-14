#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Welcome back, Tester!\n");
    // int matrix_i[2][3] = {{1, 4, 2}, {3, 6, 8}};
    // matrix_i [0][0] = 9;

    // printf("%d", matrix_i[0][0]);

    // int matrix_ii[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // matrix_ii [0][0] = 10;
    // matrix_ii [1][0] = 134;
    // matrix_ii [3][2] = 15;
    // matrix_ii [0][2] = 546;

    // printf("%d\n", matrix_ii [0][0]);
    // printf("%d\n", matrix_ii [1][0]);
    // printf("%d\n", matrix_ii [3][2]);
    // printf("%d\n", matrix_ii [0][2]);

    // int matrix_iii[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {8, 9, 0, 1}};

    // matrix_iii [0][2] = 14;

    // printf("%d", matrix_iii[0][2]);

    int matrix_iii[4][4] = {{2, 5, 6, 7}, {12, 45, 67, 89}, {557, 678, 456, 547}, {1245, 6854, 3477, 6442}};

    matrix_iii[0][0] = 10;
    matrix_iii[0][1] = 13;
    matrix_iii[0][2] = 15;
    matrix_iii[0][3] = 72;
    matrix_iii[1][0] = 54;
    matrix_iii[1][1] = 35;
    matrix_iii[1][2] = 56;
    matrix_iii[1][3] = 79;
    matrix_iii[2][0] = 123;
    matrix_iii[2][1] = 213;
    matrix_iii[2][2] = 567;
    matrix_iii[2][3] = 575;
    matrix_iii[3][0] = 6563;
    matrix_iii[3][1] = 1012;
    matrix_iii[3][2] = 1120;
    matrix_iii[3][3] = 1012;

    printf("%d\n", matrix_iii[0][0]);
    printf("%d\n", matrix_iii[0][3]);
    printf("%d\n", matrix_iii[1][0]);
    printf("%d\n", matrix_iii[1][3]);
    printf("%d\n", matrix_iii[2][0]);
    printf("%d\n", matrix_iii[2][3]);
    printf("%d\n", matrix_iii[3][0]);
    printf("%d\n", matrix_iii[3][3]);

    return 0;
}
