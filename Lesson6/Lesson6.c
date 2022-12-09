#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void Exercise1()
{
    int a, result = 1, n;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        result = result * a;
    }
    printf("result = %d", result);
}

void Exercise2()
{
    int checkNumber(int num)
    {
        if (num >= 2)
        {
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                    return 0;
            }
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int program()
    {
        int count = 0;
        int n1, n2, n3, n4, n5, n6;
        printf("Enter 6 integer. \n\n");
        printf("Enter an integer: ");
        scanf("%d", &n1);
        printf("Enter an integer: ");
        scanf("%d", &n2);
        printf("Enter an integer: ");
        scanf("%d", &n3);
        printf("Enter an integer: ");
        scanf("%d", &n4);
        printf("Enter an integer: ");
        scanf("%d", &n5);
        printf("Enter an integer: ");
        scanf("%d", &n6);

        if (checkNumber(n1) == 1)
        {
            printf("%d, ", n1);
        }

        if (checkNumber(n2) == 1)
        {
            printf("%d, ", n2);
        }

        if (checkNumber(n3) == 1)
        {
            printf("%d, ", n3);
        }

        if (checkNumber(n4) == 1)
        {
            printf("%d, ", n4);
        }

        if (checkNumber(n5) == 1)
        {
            printf("%d, ", n5);
        }

        if (checkNumber(n6) == 1)
        {
            printf("%d", n6);
        }
    }
    program();
}

void Exercise3()
{
    int fibonacci(int n)
    {
        int count = 0;
        int prevNum = 0;
        int nextNum = 1;
        int nextTerm = prevNum + nextNum;
        printf("Fibonacci series: %d, %d, ", prevNum, nextNum);
        while (count < n - 2)
        {
            prevNum = nextNum;
            nextNum = nextTerm;
            nextTerm = prevNum + nextNum;
            printf("%d, ", nextTerm);
            count++;
        }
    }
    int inputNumber()
    {
        int n;
        printf("Enter n: ");
        scanf("%d", &n);
        return n;
    }
    fibonacci(inputNumber());
}

void Exercise4()
{
    int initialProgram = 0;
    void program(int check)
    {
        int select;
        void interface()
        {
            printf("+----------------------------------------------------------------------------+\n");
            printf("|                                   MENU                                     |\n");
            printf("+----------------------------------------------------------------------------+\n");
            printf("| 1. MENU 1                                                                  |\n");
            printf("| 2. MENU 2                                                                  |\n");
            printf("| 3. MENU 3                                                                  |\n");
            printf("| 4. MENU 4                                                                  |\n");
            printf("| 5. EXIT                                                                    |\n");
            printf("+----------------------------------------------------------------------------+\n");
        }
        if (check == 0)
        {
            interface();
        }
        printf("Please choose: ");
        scanf("%d", &select);
        if (select > 5)
        {
            printf("Entered incorrectly, re-enter: ");
            scanf("%d", &select);
        }
        switch (select)
        {
        case 1:
            printf("Doing Menu 1...\n");
            program(1);
            break;
        case 2:
            printf("Doing Menu 2...\n");
            program(1);
            break;
        case 3:
            printf("Doing Menu 3...\n");
            program(1);
            break;
        case 4:
            printf("Doing Menu 4...\n");
            program(1);
            break;
        case 5:
            printf("Exiting...");
            break;
        default:
            break;
        }
    }
    program(initialProgram);
}

int main()
{
    // Exercise1();
    Exercise2();
    // Exercise3();
    // Exercise4();
    return 0;
}