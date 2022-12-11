#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define BUFSIZE 10

void Exercise1()
{
    int n = 10;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\nResult:\n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }
    }
}

void Exercise2()
{
    int aI[10];
    int aR[5];

    for (int i = 0; i < 5; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &aR[i]);
    }

    printf("\n\nResult:\n");
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            aI[i] = aR[i / 2];
        }
        else
        {
            aI[i] = 0;
        }
        printf("a[%d] = %d\n", i, aI[i]);
    }
}

void Exercise3()
{
    int n = 10;
    int a[10] = {1, 2, 3, 4, 10, 9, 7, 6, 5, 4};

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int Occs(int occNum, int a[], int n)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == occNum)
            {
                count++;
            }
        }
        return count;
    }

    int Max(int a[])
    {
        for (int i = 0; i < n; i++)
        {
            if (a[0] < a[i])
            {
                a[0] = a[i];
            }
        }
        return a[0];
    }

    int Min(int a[])
    {
        for (int i = 0; i < n; i++)
        {
            if (a[0] > a[i])
            {
                a[0] = a[i];
            }
        }
        return a[0];
    }

    int maxCount = Occs(Max(a), a, n);
    int minCount = Occs(Min(a), a, n);

    printf("\nThe maximum value is %d, the number of occurrences is %d.\n", Max(a), maxCount - 1);
    printf("The minimum value is %d, the number of occurrences is %d.", Min(a), minCount - 1);
}

void Exercise4()
{
    int n = 5;
    int a[n];

    int CheckPrime(int n, int a[])
    {
        int flag = 0;

        if (n < 2)
        {
            flag = 1;
        }

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        return flag;
    }

    int Input(int a[])
    {
        for (int i = 0; i < n; i++)
        {
            printf("a[%d] = ", i);
            scanf("%d", &a[i]);
        }
        return a[5];
    }

    Input(a);
    for (int i = 0; i < n; i++)
    {
        if (CheckPrime(a[i], a) != 0)
        {
            printf("Please re-enter:\na[%d] is not prime!\n", i);
            Input(a);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}

void Exercise5()
{
    int max = 10;
    int a[max];
    int n, count = 0;
    time_t t;

    srand((unsigned)time(&t));

    for (int i = 0; i < max; i++)
    {
        a[i] = rand() % 100;
    }

    printf("\nList random number:\n\n");
    for (int i = 0; i < max; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\nEnter number between 0-100: ");
    scanf("%d", &n);

    for (int i = 0; i < max; i++)
    {
        if (a[i] == n)
        {
            count++;
        }
    }
    for (int i = 0; i < max; i++)
    {
        if (a[i] == n)
        {
            printf("%d is in random number, the position of the first occurrence of %d is %d\n", n, n, i);
            printf("The number of occurrences of %d is %d", n, count);
            break;
        }
    }
}

void Exercise6()
{
    int n = 20;
    int a[n];
    int prevNum = 0, nextNum = 1;
    int nextTerm = prevNum + nextNum;

    for (int i = 0; i < n; i++)
    {
        prevNum = nextNum;
        nextNum = nextTerm;
        nextTerm = prevNum + nextNum;
        printf(" %d ", nextTerm);
    }
}

void Exercise7()
{
    int max = 20;
    int a[max];
    int n, count = 0;
    time_t t;

    srand((unsigned)time(&t));

    for (int i = 0; i < max; i++)
    {
        a[i] = rand() % 200;
    }

    printf("\nList random number:\n\n");
    for (int i = 0; i < max; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\nEnter number between 0-200: ");
    scanf("%d", &n);

    for (int i = 0; i < max; i++)
    {
        if (a[i] == n)
        {
            count++;
        }
    }
    for (int i = 0; i < max; i++)
    {
        if (a[i] == n)
        {
            printf("%d is in random number, the position of the first occurrence of %d is %d\n", n, n, i);
            printf("The number of occurrences of %d is %d", n, count);
            break;
        }
    }
}

void Exercise8()
{
    int n = 10;
    char a[10];
    printf("\nEnter:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }
    printf("\nAfter change to uppercase:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c", toupper(a[i]));
    }
}

// c 0 n = c n n = 1
// c k n = c k-1 n-1 = c k n-1

void Exercise9()
{
    // int n = 10;
    // int a[n][n];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    //         if (i > 1 && j > 0)
    //         {
    //             printf("%5d\n", a[i][j]);
    //         }
    //     }
    // }
}

void Exercise10()
{
    int r = 3, c = 6;
    float a[r][c];

    int ConvertScore(int n) {
        float score = 1.5 * n;
        return score;
    }

    for (int j = 0; j < r; j++)
    {
        printf("====================================\n");
        printf("Student %d\n", j + 1);
        printf("====================================\n");
        for (int i = 0; i < c; i++)
        {
            printf("Scores of subject %d = ", i + 1);
            scanf("%f", &a[j][i]);
            printf("====================================\n");
        }
    }
    printf("Student    |    CF    |    BPL   |    OOP   |    NPF   |  RDBMS   |   AVG    |  GRADE   |\n");
    printf("-----------------------------------------------------------------------------------------\n");

    for (int j = 0; j < r; j++)
    {
        float grade = 0;
        printf("Student %d  |", j + 1);
        for (int i = 0; i < c; i++)
        {
            printf("   %2.1f   |", a[j][i]);
            grade = grade + a[j][i];
        }
        if(ConvertScore(grade) < 50) {
            printf("    F     |");
        }
        else if(ConvertScore(grade) <= 50 && ConvertScore(grade) < 65) {
            printf("    D     |");
        }
        else if(ConvertScore(grade) <= 65 && ConvertScore(grade) < 80) {
            printf("    C     |");
        }
        else if(ConvertScore(grade) <= 80 && ConvertScore(grade) < 90) {
            printf("    B     |");
        }
        else {
            printf("    A     |");
        }
        printf("\n");
    }
}

int main()
{
    // Exercise1();
    // Exercise2();
    // Exercise3();
    // Exercise4();
    // Exercise5();
    // Exercise6();
    // Exercise7();
    // Exercise8();
    // Exercise9();
    Exercise10();
    return 0;
}