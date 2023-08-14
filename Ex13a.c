#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Welcome Developer!\n");

    // A-i. 1D Array Example:
    // int fllffl[5] = {45, 65, 44, 23, 54};

    // for (int d = 0; d < 5; d++)
    // {
    //     printf("Please enter the value of the %d ele of the fllffl\n", d);
    //     scanf("%d", &fllffl[d]);
    // }

    // A-ii. 1D Array Example:
    // int pine[8] = {45, 67, 87, 43, 23, 89, 54, 50};

    // for (int o = 0; o < 8; o++)
    // {
    //     printf("The value of the %d ele of the pine is %d\n", o, pine[o]);
    // }

    // B-i. 2D Array Example:
    // int chaos[2][7] = {{3, 23, 56, 43, 23, 3, 4},
    // {34, 53, 23, 4, 5, 2, 3}};

    // for (int c = 0; c < 2; c++)
    // {
    //     for (int e = 0; e < 7; e++)
    //     {
    //         printf("The value of the %d, %d ele of the chaos is %d\n", c, e, chaos[c][e]);
    //     }
    // }

    // B-ii. 2D Array Example:
    int leet[2][5] = {{3, 5, 43, 34, 233},
                      {233, 43, 2, 5, 8}};

    for (int p = 0; p < 2; p++)
    {
        for (int q = 0; q < 5; q++)
        {
            printf("The value of leet is %d\n", leet[p][q]);
        }
        printf("\n");
    }

    // int alp[9];

    // alp[0] = 43;
    // printf("The alp value is %d\n", alp[0]);

    // alp[1] = 46;
    // printf("The alp value is %d\n", alp[1]);

    // alp[2] = 8;
    // printf("The alp value is %d\n", alp[2]);

    // alp[3] = 35;
    // printf("The alp value is %d\n", alp[3]);

    // alp[4] = 44;
    // printf("The alp value is %d\n", alp[4]);

    // alp[5] = 55;
    // printf("The alp value is %d\n", alp[5]);

    // alp[6] = 3;
    // printf("The alp value is %d\n", alp[6]);

    // alp[7] = 7;
    // printf("The alp value is %d\n", alp[7]);

    // alp[8] = 5;
    // printf("The alp value is %d\n", alp[8]);

    return 0;
}
