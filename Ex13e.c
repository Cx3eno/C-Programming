#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int numbers[5];

    // numbers[0] = 10;
    // numbers[1] = 20;
    // numbers[2] = 30;
    // numbers[3] = 40;
    // numbers[4] = 50;

    // for (int u = 0; u < 5; u++)
    // {
    //     printf("numbers[%d] = %d\n", u, numbers[u]);
    // }

    int numerals[7];

    numerals[0] = 99;
    numerals[1] = 10;
    numerals[2] = 20;
    numerals[3] = 40;
    numerals[4] = 50;
    numerals[5] = 60;
    numerals[6] = 70;

    for (int y = 0; y < 7; y++)
    {
        printf("numerals[%d] = %d\n", y, numerals[y]);
    }

    return 0;
}
