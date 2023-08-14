#include <stdio.h>

int main(int argc, char const *argv[])
{
    // label:
    //     printf("we are inside the label\n");
    //     goto end;
    //     printf("The developer!\n");
    //     goto label;
    // end:
    //     printf("we are at end\n");
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);

        for (int j = 0; j < 15; j++)
        {
            printf("Enter the number. Enter 0 to exit\n");
            scanf("%d", &num);

            if (num == 0)
            {
                goto end;
            }
        }
    }
end:

    return 0;
}
