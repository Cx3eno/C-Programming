// #include <stdio.h>

// int fib_iterative(int n)
// {
//     int i = 0;
//     int o = 1;

//     for (int p = 0; p < n - 1; p++)
//     {
//         o = i + o;
//         i = o - i;
//     }

//     return i;
// }

// void main()
// {
//     int num;
//     printf("Enter the fib value using iterative approach: ");
//     scanf("%d", &num);
//     printf("The value of the fib series is %d using iterative approach is %d\n", num, fib_iterative(num));
// }


// #include <stdio.h>

// int fib_iter(int k)
// {
//     int r = 0;
//     int t = 1;

//     for (int y = 0; y < k - 1; y++)
//     {
//         t = r + t;
//         r = t - r;
//     }

//     return r;
// }

// void main()
// {
//     int val_num;

//     printf("Enter the fib value using iterative approach: ");
//     scanf("%d", &val_num);
//     printf("The value of the fib series is %d using the iterative method is %d\n", val_num, fib_iter(val_num));
// }


#include <stdio.h>

int fib(int q)
{
    int w;
    int e;
    w = 0;
    e = 1;

    for (int l = 0; l < q - 1; l++)
    {
        e = w + e;
        w = e - w;
    }
    
    return w;
}

void main()
{
    int y;

    printf("Enter the value of fib: ");
    scanf("%d", &y);
    printf("The value of the fib series is %d using iterative is %d\n", y, fib(y));
}