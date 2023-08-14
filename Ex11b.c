#include <stdio.h>

int gun(int ammo);

int main(int argc, char const *argv[])
{
    int bullet, sum;

    printf("Enter the number of bullets to buy: ");
    scanf("%d", &bullet);

    sum = gun(bullet);

    printf("gun = %d", sum);

    return 0;
}

int gun(int ammo)
{
    if (ammo != 0)
    {
        // gun() function calls itself
        return ammo + gun(ammo - 1);
    }
    else
    {
        return ammo;
    }
}