// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int gift;

    // print function starts from here
    printf("Enter the number of gifts: \n");

    // scan function starts from here
    scanf("%d", &gift);

    // print function again
    printf("You have distributed the %d number of gifts\n", gift);

    // looping statement starts from here
    if (gift >= 45)
    {
        printf("You have distributed the %d number of smartphones to both maths and science students");
    }

    else if (gift >= 15)
    {
        printf("You have distributed the %d number of laptop to science students");
    }

    else if (gift >= 15)
    {
        printf("You have distributed the %d number of smartwatches to maths students");
    }

    else
    {
        printf("The amount of gifts you have distributed is insufficient.");
    }

    return 0;
}
