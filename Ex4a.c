#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a;
    printf("Hello Developer\n");
    printf("Enter the multiplciation table of:\n");
    scanf("%d\n", &a);

    for (int num = 1; num <= 20; ++num)
    {
        // num=num*a+1;
        // num=num+1;

        printf("%d * %d = %d \n", a, num, a * num);

        if (a < 20)
        {
            continue;
        }

        printf("We have not come across any continue statements for multiplication table\n");
        printf("We have not come across any continue statements for multiplication table\n");
        printf("We have not come across any continue statements for multiplication table\n");
        printf("We have not come across any continue statements for multiplication table\n");
        printf("Data expunged!\n");
        printf("Keep trying!\n");
    }

    return 0;
}
