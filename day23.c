#include <stdio.h>

int main()
{
    ;
    // int a = 34;
    // char b = '3';
    // int *ptra = &a;
    // char *ptrb = &b;
    // ptra++;
    // ptra--;
    // ptrb++;
    // ptrb--;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra + 1); // 1 size of int = 4
    // printf("%d\n", ptra + 2); // 2 size of int = 8
    // printf("%d\n", ptrb);
    // printf("%d\n", ptrb + 1); // 1 size of char = 1 byte
    // printf("%d\n", ptrb + 2); // 2 size of char = 2 byte
    // printf("%d\n", ptra);
    // printf("%d\n", ptra - 1); // 1 size of int = 4
    // printf("%d\n", ptra - 2); // 2 size of int = 8
    // printf("%d\n", ptrb);
    // printf("%d\n", ptrb - 1); // 1 size of char = 1 byte
    // printf("%d\n", ptrb - 2); // 2 size of char = 2 byte
    // printf("%d\n", ptra);
    // printf("%d\n", ptrb);

    // char a = '3';
    // char *ptra = &a;
    // printf("%d\n", ptra);
    // ptra++; Adds the value by +1
    // printf("%d\n", ptra); Prints the value by +1
    // printf("%d\n", ptra - 2); Subtracts the value by -1

    // Program in hexadecimal format
    // char a = '3';
    // char *ptra = &a;
    // printf("%x\n", ptra);
    // ptra++;
    // printf("%x\n", ptra);
    // printf("%x", ptra - 2);

    // char a = '3';
    // char *ptra = &a;
    // printf("%p\n", ptra);
    // ptra++;
    // printf("%p\n", ptra);
    // printf("%p", ptra - 2);

    // char a = '3';
    // char *ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d", ptra - 2);

    // char a = '3';
    // char *ptra = &a;
    // printf("%x\n", ptra);
    // ptra--;
    // printf("%x\n", ptra);
    // printf("%x", ptra - 2);

    // char a = '3';
    // char *ptra = &a;
    // printf("%p\n", ptra);
    // ptra--;
    // printf("%p\n", ptra);
    // printf("%p", ptra - 2);

    int arr[] = {311, 52, 3, 4, 5, 6, 7, 67};
    int *arrayptr = arr;
    printf("%d \n", arr[0]);
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr); // the address of the first element prints by default
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1); // prints the same line and the same address of the next index
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2); // prints the same line and the same address of the next index
    arrayptr++;
    arrayptr--;
    // arr++; or arr--; is a constant and you cannot change it; will throw an error since the first element contains an index number [0] address

    // dereferencing the value
    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", *(arr)); // the address of the first element prints by default
    printf("The value at address of first element of the array is %d \n", arr[0]); // the address of the first element prints by default
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1)); // prints the same line and the same address of the next index
    printf("The value at address of third element of the array is %d \n", *(arr + 2)); // prints the same line and the same address of the next index
    printf("The value at address of third element of the array is %d \n", arr[2]);
    printf("The value at address of third element of the array is %d \n", *(&arr[2]));

    return 0;
}