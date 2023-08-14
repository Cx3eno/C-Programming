// #include <stdio.h>

// // Code to count the number of times 19 occur
// int fib(int a)
// {
//     if (a == 0)
//     {
//         return 0;
//     }

//     else if (a == 1)
//     {
//         return 1;
//     }

//     if (a == 19)
//     {
//         printf("Count!\n");
//     }

//     return fib(a - 1) + fib(a - 2);
// }

// void main()
// {
//     fib(22);
// }

// #include <stdio.h>

// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }

//     else if (n == 1)
//     {
//         return 1;
//     }

//     if (n == 19)
//     {
//         printf("Count!\n");
//     }

//     return fib(n - 1) + fib(n - 2);
// }

// void main()
// {
//     fib(22);
// }

#include <stdio.h>

int fibonacci(int e)
{
    if (e == 0)
    {
        return 0;
    }

    else if (e == 1)
    {
        return 1;
    }

    if (e == 19)
    {
        printf("Recursion count!\n");
    }

    return fibonacci(e - 1) + fibonacci(e - 2);
}

void main()
{
    fibonacci(22);
}