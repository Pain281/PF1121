#include <stdio.h>

int main()
{
    // int a = 250, b = 120;
    // float f = 3.14;

    // int *ptr = &a;
    // float *fPtr = &f;

    // // printf("address: %d\n", *ptr);

    // printf("value: %d", *ptr);

    // ptr = &b;

    // printf("value: %d", *ptr);

    int arr[] = { 1, 2, 3, 4, 5 };
    int *ptr = arr;
    int i;

    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    } 
    printf("\n");
    // for(int i = 0; i < 5; i++) {
    //     printf("%d", *(ptr + i));
    // }
    for(; ptr <= &arr[4]; ptr++) {
        printf("%d", *ptr);
    }
}