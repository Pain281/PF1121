#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapFloat(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

void Exercise1()
{
    int a, b, temp;
    int *p;

    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("After swapping: \n");
    printf("Value a = %d\n", a);
    printf("Value b = %d\n", b);
}

void Exercise2()
{
    int n = 5;
    int arr[n];
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", ptr + i);
    }

    for (; ptr < &arr[n]; ptr++)
    {
        printf("%5d", *ptr);
    }
}

void Exercise3()
{
    int n = 5;
    int a[n], b[n], c[n];
    int *p = a;

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = (*p + i) + b[i];
    }
    printf("Result: \n");
    for (int i = 0; i < n; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
    }
}

void Exercise4()
{
    int n;
    float temp;
    float *p;

    printf("Enter n = ");
    scanf("%d", &n);

    p = (float *)malloc(n * sizeof(float));
    if (p == NULL)
    {
        printf("\nError!\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", p + i);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(p + i) < *(p + j))
            {
                swapFloat(p + i, p + j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", *(p + i));
    }
}

int main()
{
    // Exercise1();
    // Exercise2();
    // Exercise3();
    Exercise4();
    return 0;
}
