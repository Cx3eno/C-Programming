#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Welcome Tester!\n");

    // int rar[3][3], o, p;

    // for (int o = 0; o < 3; o++)
    // {
    //     for (int p = 0; p < 3; p++)
    //     {
    //         printf("Enter rar[%d][%d]: ", o, p);
    //         scanf("%d", &rar[o][p]);
    //     }
    //     // end of p
    // }
    // // end of o

    // printf("\nPrinting the elements...\n");
    // for (int o = 0; o < 3; o++)
    // {
    //     printf("\n");

    //     for (int p = 0; p < 3; p++)
    //     {
    //         printf("%d\t", rar[o][p]); // prints in one horizontal tab
    //     }
    //     // end of p
    // }
    // // end of o

    int pass_g[5][4], u, i;

    for (int u = 0; u < 5; u++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("enter pass_g[%d][%d]: ", u, i);
            scanf("%d", &pass_g[u][i]);
        }
        // end of i
    }
    // end of u

    printf("\nPrinting the elements...\n");
    for (int u = 0; u < 5; u++)
    {
        printf("\n");

        for (int i = 0; i < 4; i++)
        {
            printf("%d\t", pass_g[u][i]); // prints in one horizontal tab
        }
        // end of i
    }
    // end of u

    return 0;
}
