// explicit typecasting

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    float b;
    char c;

    printf("Enter the value of a\n");
    scanf("%d\n", &a);
    printf("A is %d\n", a);
    printf("Enter the value of b\n");
    scanf("%f\n", &b);
    printf("B is %d\n", (int)b);
    printf("Enter the value of c\n");
    scanf("%c\n", &c);
    printf("C is %d\n", (int)c);

    return 0;
}
