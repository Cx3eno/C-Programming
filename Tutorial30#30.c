/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern

*****
****
***
**
* -> Reverse Triangular star pattern */

/* #include <stdio.h>

int main()
{
    int star1;
    printf("The triangular star pattern: \n");
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    printf("******\n");

    printf("The reverse triangular star pattern: \n");
    printf("******\n");
    printf("*****\n");
    printf("****\n");
    printf("***\n");
    printf("**\n");
    printf("*\n");

    return 0;
}


#include <stdio.h>

int main()
{
    char input;
    int a, b, rows;
    printf("Enter the number of rows in the triangle: \n");

    while (1)
    {
        printf("Which of the following triangles would you prefer: Press q to exit \n        1: Upright triangle.\n        2: Inverted triangle\n");
        scanf(" %c", &input);
    }
    switch (input)
    {
    case 'q':
        printf("Quitting program now...");
        goto end;
        break;

    case '1':
        for (a = 0; a < rows; a++)
        {
            for (b = 0; b < a; b++)
            {
                printf("* ");
            }
            printf("\n\n");
        }

        break;

    case '2':
        for (a = 0; a < rows; a++)
        {
            for (b = 0; b < rows - a; b++) // for(j = 0; j < rows - i; j++ )
            {
                printf("* ");
            }

            printf("\n\n");
        }

        break;

    default:
        break;
    }
end:

    return 0;
}

*/

#include <stdio.h>

int main()
{
    char input;

    int i, j, rows;

    printf("Enter the pattern of your choice: \n 1. Triangular Star Pattern 2. Reverse Triangular Star Pattern. 3. Both\n");
    scanf("%c", &input);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);

    switch (input)
    {
    case '1':
        printf("Triangular Star Pattern...\n\n");

        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        break;

    case '2':
        printf("Reverse Triangular Star Pattern...\n\n");

        for (int i = 1; i <= rows; i++)
        {
            for (int j = i; j <= rows; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        break;

    case '3':
        printf("Triangular Star Pattern...\n\n");
        {

            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");

            printf("Reverse Triangular Star Pattern...\n\n");

            for (int i = 1; i <= rows; i++)
            {
                for (int j = i; j <= rows; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        break;

    default:
        break;
    }

    return 0;
}