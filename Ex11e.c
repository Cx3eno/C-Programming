#include <stdio.h>

int facto(int j);

int main(int argc, char const *argv[])
{
    int k, l;

    printf("Enter the number whose factorial you want?\n");
    scanf("%d", &k);

    l = facto(k);

    printf("facto = %d", l);

    return 0;
}

int facto(int j)
{
    if (j == 0)
    {
        return 0;
    }
    else if (j == 1)
    {
        return 1;
    }
    else
    {
        return j * facto(j - 1);
    }
}