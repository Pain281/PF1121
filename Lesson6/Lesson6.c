#include <stdio.h>
#include <math.h>

void Exercise1()
{
    int a, n;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter n: ");
    scanf("%d", &n);

    int result = pow(a, n);
    printf("%d to a power of %d has the value: %d", a, n, result);
}

void Exercise2()
{
    int inputNumber()
    {
        int n;
        scanf("%d", &n);
        return n;
    }
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
        int n;
        printf("Enter 6 integer: \n");
        while (count <= 5)
        {
            count++;
            n = inputNumber();
            switch (checkNumber(n))
            {
            case 1:
                printf("is an integer\n\n");
                break;
            default:
                printf("isn't an integer\n\n");
                break;
            }
        }
    }
    program();
}

int main()
{
    // Exercise1();
    Exercise2();
    return 0;
}