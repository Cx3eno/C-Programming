#include <stdio.h>

int tot(int in);

int main(int argc, char const *argv[])
{
    int input, total;

    printf("Enter a positive value of integer number: ");
    scanf("%d", &input);

    total = tot(input);

    printf("tot = %d", total);

    return 0;
}

int tot(int in)
{
    if (in != 0)
    {
        // tot() function calls itself
        return in + tot(in - 1);
    }
    else
    {
        return in;
    }
}