#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = 6.99999999;
    long double b = 35.666666660;
    printf("%8.9f %Lf", a, b);

    return 0;
}