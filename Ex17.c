// Call by reference: Exercise

// #include <stdio.h>

// void change_Value1(int *address_a) // address of a is passed and altered
// {
//     *address_a = 1234;
// }

// void change_Value2(int *address_b) // address of b is passed and altered
// {
//     *address_b = 5678;
// }

// int main()
// {
//     // declaration and initialisation
//     int a = 45; // value of a
//     int b = 54; // value of b
//     printf("The value of a is %d\n", a);
//     change_Value1(&a); // function called by reference
//     printf("The value of a now is %d\n", a); // output after function call

//     printf("The value of b is %d\n", b);
//     change_Value2(&b); // function called by reference
//     printf("The value of b now is %d\n", b); // output after function call

//     return 0;
// }


#include <stdio.h>

void change_Val1(int *addr_x)
{
    *addr_x = 3235;
}

void change_Val2(int *addr_y)
{
    *addr_y = 5323;
}

int main()
{
    int x = 99, y = 66;
    printf("The value of x is %d\n", x);
    change_Val1(&x);
    printf("The value of x now is %d\n", x);

    printf("The value of y is %d\n", y);
    change_Val2(&y);
    printf("The value of y now is %d\n", y);

    return 0;
}