#include <stdio.h>

int main()
{
    int a = 250, b = 120;
    float b = 3.14;

    int *ptr = &a;
    float *fPtr = &b;

    printf("address: %d\n", *ptr);

    ptr = &b;

    printf("value: %d", *ptr);
}