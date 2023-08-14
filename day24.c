// #include <stdio.h>

// // fib_recursive(int n);
// //      if(n == 1 or n == 2)
// //          return n-1;

// //      else:
// //          return fib_recursive(n-1) + fib_iterative(n-2)

// int fib_recursive(int n) // prints through recursive approach
// {
//     if (n == 1 || n == 2)
//     {
//         return n - 1;
//     }

//     else
//     {
//         return fib_recursive(n - 1) + fib_recursive(n - 2);
//     }
// }

// int fib_iterative(int n) // prints through iterative approach
// {
//     int a = 0;
//     int b = 1;

//     for (int i = 0; i < n - 1; i++)
//     {
//         b = a + b; // 1 for iteration 1
//         a = b - a; // 1 for iteration 1
//     }

//     return a;
// }

// int main()
// {
//     int number;
//     printf("Enter the index to get the fibonacci series \n");
//     scanf("%d", &number);
//     printf("The value of fibonacci number at position number %d using iterative approach is %d\n", number, fib_iterative(number));
//     printf("The value of fibonacci number at position number %d using recursive approach is %d\n", number, fib_recursive(number));

//     return 0;
// }

// #include <stdio.h>

// int fib_iterative(int n)
// {
//     int y = 0;
//     int z = 1;

//     for (int i = 0; i < n - 1; i++)
//     {
//         z = y + z;
//         y = z - y;
//     }

//     return y;
// }

// int fib_recursive(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n - 1;
//     }

//     else
//     {
//         return fib_recursive(n - 1) + fib_recursive(n - 2);
//     }

//     return 0;
// }

// int main()
// {
//     int number;
//     printf("Enter the index to get the fibonacci series \n");
//     scanf("%d", &number);
//     printf("The value of fibonacci number at position number %d using iterative apporach is %d\n", number, fib_iterative(number));
//     printf("The value of fibonacci number at position number %d using recursive apporach is %d\n", number, fib_recursive(number));

//     return 0;
// }


#include <stdio.h>

int fib_iter(int k)
{
    int f = 0;
    int g = 1;
    for (int j = 0; j < k - 1; j++)
    {
        g = f + g;
        f = g - f;
    }
    
    return f;
}

int fib_recur(int k)
{
    if (k == 1 || k == 2)
    {
        return (k -1);
    }

    else
    {
        return fib_recur(k - 1) + fib_recur(k -2);    
    }
    
    return 0;
}

int main()
{
    int num;
    printf("Enter the index value to get the Fibonacci Series: \n");
    scanf("%d", &num);
    printf("The value of the Fibonacci number at the position number %d using iterative approach is %d\n", num, fib_iter(num));
    printf("The value of the Fibonacci number at the position number %d using recursive approach is %d\n", num, fib_recur(num));

    return 0;
}