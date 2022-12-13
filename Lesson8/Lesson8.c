#include <stdio.h>
#include <string.h>
#define MAX 80

void Exercise1()
{
    char str[MAX];
    char c;
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &c);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    printf("The number of occurrences of %c is %d\n", c, count);
}

void Exercise2()
{
    char str[MAX];
    char c;
    int i = 0;
    printf("Enter a string: ");
    gets(str);

    while (i < strlen(str))
    {
        if (str[0] == ' ' || str[-1] == ' ')
        {
            str[0] = str[1];
            str[-1] = '\0';
            str[0] = str[0] - 32;
        }
        else
        {
            printf("%c", str[i]);
        }
        i++;
    }
}

void Exercise3()
{
    char str[MAX];
    int count = 0;
    int temp = 0;

    printf("Enter a string: ");
    gets(str);

    int StrLength(char str[])
    {
        return strlen(str);
    }

    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case 'a':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'u':
            count++;
            break;
        default:
            break;
        }
    }

    float percent = count / StrLength(str) * 100;

    printf("The number of characters is %d\n", StrLength(str));
    printf("The number of vowel characters is %d\n", count);
    printf("The percentage of vowel characters %.2f%%\n", percent);
}

void Exercise4()
{
    char str[MAX];
    int flag = 0;
    int length;
    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == str[(length - i - 1)])
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Is palindrome");
    }
    else
    {
        printf("Isn't palindrome");
    }
}

void Exercise6()
{
    char str[MAX];
    int countA = 0, countN = 0, countC = 0;
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            countA++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            countN++;
        }
        else
        {
            countC++;
        }
    }
    printf("Number of alphabet is %d\n", countA);
    printf("Number of number is %d\n", countN);
    printf("Number of special character is %d\n", countC);
}

void Exercise7()
{
    char str[MAX];
    int sc = '@', dot = '.', access = 0, scAccess = 0, dAccess = 0;
    printf("Enter your email: ");
    scanf("%c", &str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            access = 1;
            break;
        }
        else if (str[i] == sc)
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z' || str[i - 1] >= 'a' && str[i - 1] <= 'z')
            {
                scAccess++;
            }
            else if (scAccess > 1 || scAccess <= 0)
            {
                access = 1;
                break;
            }
        }
        else if (str[i] == dot)
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z' || str[i - 1] >= 'a' && str[i - 1] <= 'z')
            {
                dAccess++;
            }
            else if (dAccess > 1 || dAccess <= 0)
            {
                access = 1;
                break;
            }
        }
    }

    if (access == 0 && scAccess == 1 && dAccess == 1)
    {
        printf("OK");
    }
    else
    {
        printf("Please re-enter your email!");
    }
}

int main()
{
    // Exercise1();
    // Exercise2();
    // Exercise3();
    // Exercise4();
    // Exercise6();
    Exercise7();
    // char str1[] = "abca";
    // int temp = 1;

    // for (int i = 0; i < 4; i++)
    // {
    //     if (str1[0] == str1[i])
    //     {
    //         printf(" %c ", str1[i]);
    //     }
    // }
    return 0;
}