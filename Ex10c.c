// with arguments and with return value

#include <stdio.h>

int def(int x, float y);

int main(int argc, char const *argv[])
{
    int x;
    float y;
    float z = def(x, y);

    printf("Enter the desired input \n");
    scanf("%.02f", &z);

    printf("The desired output is %.02f\n", z);

    return 0;
}

int def(int x, float y)
{
    return x + y;
}
