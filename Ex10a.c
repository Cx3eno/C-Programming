// without arguments and with return value

#include <stdio.h>

int anynumber()
{
    int x;
    printf("Enter any number\n");
    scanf("%d", &x);
    printf("The entered number is %d \n", x);
    return x;
}

int main(int argc, char const *argv[])
{
    int y;
    y = anynumber();
    return 0;
}
