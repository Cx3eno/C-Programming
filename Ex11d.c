#include <stdio.h>

int fact(int);

int main(int argc, char const *argv[])
{
    int n, f;
    printf("Enter the number who factorial you want to calculate?\n");
    scanf("%d", &n);
    f = fact(n);
    printf("factorial=%d", f);

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