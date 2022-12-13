#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
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

// - Chuyển ký tự đầu tiên thành chữ hoa (nếu đã là chữ thường)
// - Mỗi từ trong chuỗi nhập chỉ được cách nhau 1 dấu cách (chỉ chừa 1
// khoảng cách giữa hai từ)
// - Không có khoảng trắng ở đầu và cuối chuỗi

// printf("xau da chuan hoa : \"%s\"",s);

// getch();

void Exercise2()
{
    int i;
    char str[MAX];

    printf("Enter a string: ");
    gets(str);
    while (str[0] == ' ')
    {
        strcpy(&str[0], &str[1]);
    }
    while (str[strlen(str) - 1] == ' ')
    {
        strcpy(&str[strlen(str) - 1], &str[strlen(str)]);
    }
    while(str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }

    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] == ' ') && (str[i + 1] == ' '))
        {
            strcpy(&str[i], &str[i + 1]);
            i--;
        }
    }
    printf("%s", str);
}

void Exercise3()
{
    char str[MAX];
    int count = 0;
    int temp = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[0] == ' ')
    {
        strcpy(&str[0], &str[1]);
    }
    while (str[strlen(str) - 1] == ' ')
    {
        strcpy(&str[strlen(str) - 1], &str[strlen(str)]);
    }
    while(str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }

    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] == ' ') && (str[i + 1] == ' '))
        {
            strcpy(&str[i], &str[i + 1]);
            i--;
        }
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

    int CountChar(int countChar, char str[]) {
        for(int i = 0; i < strlen(str); i++) {
            if(str[i] != ' ') {
                countChar++;
            }
        }
        return countChar;
    }

    float percent = (float)count / CountChar(0, str) * 100;
    printf("The number of characters is %d\n", CountChar(0, str));
    printf("The number of vowel characters is %d\n", count);
    printf("The percentage of vowel characters %.2f%%\n", percent);
    printf("Standardized string: %s", str);
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

void Exercise5()
{
    char strSample[] = "Dung hoc IT";
    char str[MAX];
    int flag = 0;

    printf("\nString to compare: ");
    for (int i = 0; i < strlen(strSample); i++)
    {
        printf("%c", strSample[i]);
    }

    printf("\nEnter a string to compare: ");
    gets(str);

    if (strlen(strSample) != strlen(str))
    {
        printf("\nDifference!\n");
    }
    else
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (strSample[i] == str[i])
            {
                printf("\nSame!\n");
                break;
            }
            else
            {
                printf("\nDifference!\n");
                break;
            }
        }
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
    int sc = '@', dot = '.', access = 0, scFlag = 0, dFlag = 0, flag = 0;
    printf("\nEnter your email: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == sc)
        {
            access = 0;
            flag = 1;
            goto SKIP;
        }
        else if (str[i] != sc)
        {
            if (flag == 0)
            {
                if (str[i] == dot)
                {
                    access = 1;
                    break;
                }
                else
                {
                    access = 0;
                }
            }
        }
    SKIP:
        if (str[i] == ' ')
        {
            access = 1;
            break;
        }
        else if (str[i] == sc)
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i - 1] >= 'a' && str[i - 1] <= 'z' || str[i + 1] >= '0' && str[i + 1] <= '9' && str[i - 1] >= 'a' && str[i - 1] <= 'z')
            {
                scFlag++;
            }
            else if (scFlag > 1 || scFlag <= 0)
            {
                access = 1;
                break;
            }
        }
        else if (str[i] == dot)
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i - 1] != sc)
            {
                dFlag++;
            }
            else if (dFlag > 1 || dFlag <= 0)
            {
                access = 1;
                break;
            }
        }
    }

    if (access == 0 && scFlag == 1 && dFlag == 1)
    {
        printf("Success!");
    }
    else
    {
        printf("\nPlease re-enter your email!");
        Exercise7();
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
    Exercise7();
    return 0;
}