// with arguments and without return value

#include <stdio.h>

void printstar(int z)
{
    for (int i = 0; i < z; i++)
    {
        printf("%c\n", '#');
    }
}

int main(int argc, char const *argv[])
{
    printstar(9);

    return 0;
}
