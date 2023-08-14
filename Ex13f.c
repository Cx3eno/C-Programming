#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Welcome Developer!\n");

    // int i=0, j=0;
    // int arr[4][3] = {{1,2,3}, {2,3,4}, {3,4,5}, {4,5,6}};

    // // traversing 2D array
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("arr[%d][%d] = [%d]\n", i, j, arr[i][j]);
    //     }
    //     // end of j
    // }
    // //end of i

    int k = 0, l = 0;
    int arr[6][3] = {{1, 2, 3}, {3, 4, 5}, {5, 6, 7}, {9, 8, 7}, {8, 7, 6}, {7, 6, 5}};

    // traversing of 2D array
    for (int k = 0; k < 6; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("arr[%d][%d] = [%d]\n", k, l, arr[k][l]);
        }
        // end of l
    }
    // end of k

    return 0;
}
