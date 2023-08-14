#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Welcome Developer!\n");

    // int arr[3][3], i, j;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Enter a[%d][%d]:", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    //     // end of j
    // }
    // // end of i

    // printf("\nPrinting the elements...\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("\n");

    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d\t", arr[i][j]); // prints in one tab horizontal space '\t'
    //     }
    //     // end of j
    // }
    // // end of i

    int arr[6][3], k, l;

    for (int k = 0; k < 6; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("Enter a[%d][%d]:", k, l);
            scanf("%d", &arr[k][l]);
        }
        // end of k
    }
    // end of l

    printf("\nPrinting the elements...\n");
    for (int k = 0; k < 6; k++)
    {
        printf("\n");

        for (int l = 0; l < 3; l++)
        {
            printf("%d\t", arr[k][l]); // prints in one tab horizontal space '\t'
        }
        // end of k
    }
    // end of l

    return 0;
}
