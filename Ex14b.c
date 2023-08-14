#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    else if (n == 1)
    {
        return 1;
    }

    if (n == 19)
    {
        printf("fib\n");
    }
    
    return fib(n - 1) + fib(n - 2);
}

void main()
{
    fib(22);
}