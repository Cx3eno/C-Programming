#include <stdio.h>

int fact(int n);

int main(int argc, char const *argv[])
{
    int num, sum;

    printf("Enter the positive integer value: ");
    scanf("%d", &num);

    sum = fact(num);

    printf("fact = %d", sum);

    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}