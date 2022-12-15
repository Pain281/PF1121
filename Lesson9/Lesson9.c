#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void Exercise1()
{
    int n, count = 0, temp;

    printf("Enter quantity of element in array: \n");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("After sort:\n");
    while (count < n)
    {
        printf("a[%d] = %d\n", count, a[count]);
        count++;
    }
}

void Exercise2()
{
    int temp, count;
    int row = 10, col = 10;
    int a[col][row];
    int k = row * col;
    int tempArr[k];
    srand(time(NULL));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = rand() % 1000;
        }
    }

    for (int i = 0; i < k; i++)
    {
        tempArr[i] = a[i / col][i % col];
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j < k; j++)
        {
            if (tempArr[i] < tempArr[k])
            {
                temp = tempArr[i];
                tempArr[i] = tempArr[k];
                tempArr[k] = temp;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    for (int i = 0; i < col; i++)
    {
        printf("\n%d\t", tempArr[i]);
    }
}

void Exercise3()
{
    int n;
    char a[MAX][MAX];

    printf("==========================\n");
    printf("           MENU           \n");
    printf("==========================\n");
    printf("1. Add Student Name\n");
    printf("2. Search Student Name\n");
    printf("3. Sort Student Names\n");
    printf("4. Add Student Name\n");
    printf("==========================\n");
    printf("Choose Option: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Enter number of student you want to add: ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            printf("Enter student name: ");
            gets(a[i][MAX]);
        }
        for (int i = 0; i < n; i++)
        {
            puts(a[i][MAX]);
        }
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;

    default:
        break;
    }
    // void AddStudentName()
    // {
    // }
}

int main()
{
    // Exercise1();
    // Exercise2();
    Exercise3();
    return 0;
}