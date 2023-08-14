#include <stdio.h>

// void printFibonacci(int n)
// {
//     static int n1 = 0, n2 = 1, n3;
//     if (n > 0)
//     {
//         n3 = n1 + n2;
//         n1 = n2;
//         n2 = n3;
//         printf(" %d", n3);
//         printFibonacci(n - 1);
//     }
// }

// void printFib(int h)
// {
//     static int h1 = 0, h2 = 1, h3;
//     if (h > 0)
//     {
//         h3 = h1 + h2;
//         h1 = h2;
//         h2 = h3;
//         printf(" %d", h3);
//         printFib(h - 1);
//     }
// }

// void printfib(int y)
// {
//     static int y1 = 0, y2 = 1, y3;
//     if (y > 0)
//     {
//         y3 = y1 + y2;
//         y1 = y2;
//         y2 = y3;
//         printf(" %d", y3);
//         printfib(y - 1);
//     }
// }


void print_fib(int x)
{
    static int x1 = 0, x2 = 1, x3;
    if (x > 0)
    {
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
        printf(" %d", x3);
        print_fib(x - 1);
    }
    
}

// int main(int argc, char const *argv[])
// {
//     // fib_recursive(int n):
//     //     if n==1 or n==2:
//     //         return n;

//     //     else:
//     //         return fib_recursive(n-1) + fib_recursive(n-2);

//     // int n1 = 0, n2 = 1, n3, i, number;

//     // printf("Enter the number of elements: ");
//     // scanf("%d\n", &number);
//     // printf("\n%d%d", n1, n2); // printing 0 and 1
//     // for (i = 2; i < number; i++)
//     // {
//     //     n3 = n1 + n2;
//     //     printf(" %d", n3);
//     //     n1 = n2;
//     //     n2 = n3;
//     // }

//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d\n", &n);
//     printf("Fibonacci Series: ");
//     printf("\n%d %d", 0, 1);
//     printFibonacci(n-2); //n-2 because 2 numbers are already printed

//     return 0;
// }

int main(int argc, char const *argv[])
{
    // int k1 = 0, k2 = 1, k3, o, count;

    // printf("Enter the number of values: ");
    // scanf(" %d", &count);
    // printf("\n%d%d", k1, k2);

    // for (o = 2; o < count; o++)
    // {
    //     k3 = k1 + k2;
    //     printf(" %d", k3);
    //     k1 = k2;
    //     k2 = k3;
    // }

    // int j1 = 0;
    // int j2 = 1;
    // int j3;
    // int p;
    // int num;

    // printf("Enter the numbers of values: ");
    // scanf(" %d", &num);
    // printf("\n%d %d", j1, j2);

    // for (p = 0; p < num; p++)
    // {
    //     j3 = j1 + j2;
    //     printf(" %d", j3);
    //     j1 = j2;
    //     j2 = j3;
    // }

    // int r1;
    // int r2;
    // int r3;
    // int t;
    // int numb;

    // r1 = 0;
    // r2 =1;

    // printf("Enter the number of vals: ");
    // scanf(" %d", &numb);
    // printf("\n%d %d", r1, r2);

    // for (t = 0; t < numb; t++)
    // {
    //     r3 = r1 + r2;
    //     printf(" %d", r3);
    //     r1 = r2;
    //     r2 = r3;
    // }

    // int h;
    // printf("Enter the number of ele: ");
    // scanf("%d", &h);
    // printf("Fibonacci Series: ");
    // printf("%d %d", 0, 1);
    // printFib(h - 2);

    // int y;
    // printf("Enter the number of eles: ");
    // scanf("%d", &y);
    // printf("fibonacci series: ");
    // printf("%d %d", 0, 1);
    // printfib(y - 2);


    int x;

    printf("Enter the nubmer of vals: ");
    scanf(" %d", &x);
    printf("fib series: \n");
    printf("%d %d", 0 , 1);
    print_fib(x - 2);

    return 0;
}
