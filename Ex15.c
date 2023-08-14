// #include <stdio.h>

// int main()
// {
//     char inp;

//     int q, w, rows;

//     printf("Enter the pattern of your own choice:    1. Triangular Star Pattern\n    2. Reverse Triangular Star Pattern\n    3. Both Patterns\n");
//     scanf("%c", &inp);
//     printf("How many rows do you want?\n");
//     scanf("%d", &rows);

//     switch (inp)
//     {
//     case 'e':
//         printf("Program Terminated.\n");
//         goto end;
//         break;

//     case '1':
//         printf("Executing the triangular star pattern\n");

//         for (int q = 1; q <= rows; q++)
//         {
//             for (int w = 1; w <= q; w++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }

//         break;

//     case '2':
//         printf("Executing the reverse triangular star pattern\n");

//         for (int q = 1; q <= rows; q++)
//         {
//             for (int w = q; w <= rows; w++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }

//         break;

//     case '3':
//         printf("Executing both the star patterns\n");
//         printf("Triangular Star Pattern\n");
//         {
//             for (int q = 1; q <= rows; q++)
//             {
//                 for (int w = q; w <= rows; w++)
//                 {
//                     printf("*");
//                 }
//                 printf("\n");
//             }

//             printf("\n");

//             printf("Reverse Triangular Star Pattern\n");

//             for (int q = 1; q <= rows; q++)
//             {
//                 for (int w = q; w <= rows; w++)
//                 {
//                     printf("*");
//                 }
//                 printf("\n");
//             }
//             printf("\n");
//         }
//         break;

//     default:
//         break;
//     }
// end:

//     return 0;
// }

/*
#include <stdio.h>

int main()
{
    char input;
    int f, g, rows;

    printf("Select the numbers to print the star pattern of your choice:\n    1. Triangular Star Pattern\n    2. Reverse Triangular Star Pattern\n    3. Both the Star Patterns\n    4. Press Q to exit\n");
    scanf("%c", &input);


    printf("How many rows of patterns to print?\n");
    scanf("%d", &rows);

    printf("You have selected the following:\n");

    switch (input)
    {
    case 'q':
        printf("4. Press Q to exit\n");
        printf("Program has been terminated.\n");
        goto end;
        break;

    case '1':
        printf("1. Triangular Star Pattern\n");

        for (int f = 1; f <= rows; f++)
        {
            for (int g = 1; g <= f; g++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

        break;

    case '2':
        printf("2. Reverse Triangular Star Pattern.\n");

        for (int f = 1; f <= rows; f++)
        {
            for (int g = f; g <= rows; g++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

        break;

    case '3':
        printf("3. Both the Star Patterns.\n");
        printf("Triangular Star Pattern\n");
        {
            for (int f = 1; f <= rows; f++)
            {
                for (int g = 1; g <= f; g++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");

            printf("Reverse Triangular Star Pattern\n");

            for (int f = 1; f <= rows; f++)
            {
                for (int g = f; g <= rows; g++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
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
    char value;

    int z, x, rows;

    printf("Select the pattern of your choice:\n    1. Triangular Star Pattern\n    2. Reverse Triangular Star Pattern\n    3. Both Star Patterns\n    4. Program Termination\n");
    scanf("%c", &value);

    printf("How many rows of patterns do you want to print?\n");
    scanf("%d", &rows);

    printf("You have selected the following choice:\n");

    switch (value)
    {
    case '1':
        printf("1. Triangular Star Pattern\n");

        for (int z = 1; z <= rows; z++)
        {
            for (int x = 1; x <= z; x++)
            {
                printf("*");
            }
            printf("\n");
        }

        break;

    case '2':
        printf("2. Reverse Triangular Star Pattern\n");

        for (int z = 1; z <= rows; z++)
        {
            for (int x = z; x <= rows; x++)
            {
                printf("*");
            }
            printf("\n");
        }

        break;

    case '3':
        printf("3. Both Star Patterns\n");
        {

            printf("Triangular Star Pattern\n");

            for (int z = 1; z <= rows; z++)
            {
                for (int x = 1; x <= z; x++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");

            printf("Reverse Triangular Star Pattern\n");

            for (int z = 1; z <= rows; z++)
            {
                for (int x = z; x <= rows; x++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }

        break;

    case 'q':
        printf("4. Program Termination\n");
        printf("Program terminated\n");
        goto end;

        break;

    default:
        break;
    }
end:

    return 0;
}