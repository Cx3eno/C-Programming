/* Call by Value */

#include <stdio.h>

// with arguments and with return value
int sum(int a, int b); // function prototype

// with arguments and without return value
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

// without arguments and with return value
int takenumber()
{
    int i;
    printf("Enter a number \n");
    scanf("%d", &i);
    return i;
}

// with arguments and with return value
// without arguments and with return value
int main(int argc, char const *argv[])
{
    printf("Welcome Developer\n");
    int a, b, c;
    a = 9;
    b = 7;
    // c = sum(a, b);
    // printstar(7);
    c = takenumber();
    // printf("The sum is %d\n", c);
    printf("The number entered is %d \n", c);
    return 0;
}

int sum(int a, int b) // copies the values of a and b
{
    return a + b;
}