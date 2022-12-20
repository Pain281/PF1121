#include <stdio.h>
#define MAX 10

int something(int *a, int *b)
{
    printf("%d", *a);
    printf("%d", *b);
}

int main()
{
    int a = 2, b = 3;
    int *p = a;
    something(p, &b);
    return 0;
}