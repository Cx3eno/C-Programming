#include <stdio.h>

int fish(int food);

int main(int argc, char const *argv[])
{
    int type, total;

    printf("Enter the number of fish to buy: ");
    scanf("%d", &type);

    total = fish(type);

    printf("fish = %d", total);

    return 0;
}

int fish(int food)
{
    if (food != 0)
    {
        // fish() function calls itself
        return food + fish(food - 1);
    }
    else
    {
        return food;
    }
}