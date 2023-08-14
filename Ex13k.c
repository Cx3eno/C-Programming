#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Where is the developer?\n");
    // int matrix[2][3] = {{15, 6334, 543}, {124, 543, 21311}};

    // int i, j;
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%d\n", matrix[i][j]);
    //     }
           // end of j
    // }
       // end of i


    // int matrix_ii[3][4] = {{12, 45, 78}, {987, 654, 321}, {135, 791, 246}, {1234, 5678, 9012}};

    // int r, t_l;

    // for (r = 0; r < 3; r++)
    // {
    //     for (t_l = 0; t_l < 4; t_l++)
    //     {
    //         printf("%d\n", matrix_ii[r][t_l]);
    //     }
    //     // end of t_l
    
    // }
    // // end of r


    int matrix_the_3rd[5][5] = {{1, 2, 3, 4, 5}, 
                                {12, 34, 56, 78, 99}, 
                                {98, 87, 76, 65, 54}, 
                                {13, 35, 57, 79, 91}, 
                                {24, 46, 68, 89, 92}};

    int v_ec, m4t;

    // for loop initialisation
    for (v_ec = 0; v_ec < 5; v_ec++)
    {
        for (m4t = 0; m4t < 5; m4t++)
        {
            printf("%d\n", matrix_the_3rd[v_ec][m4t]);
        }
        // end of m4t

    }
    // end of v_ec
 
    return 0;
}
