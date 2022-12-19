#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = (j + 1); k < j; ++k)
            {
                if (a[i][j] > a[i][k])
                {
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
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
}

// void Exercise3()
{

    typedef struct Student
    {
        char surName[20];
        char middleName[20];
        char name[20];
        int id;
    } s[50];

    int option;
    int id;
    int n;
    char searchName, temp;
    int count = 0;

    void Show(struct student s[], int count)
    {
        printf("-----------------------------------------\n");
        printf("| No    |      Name     |    New Name   |\n");
        printf("-----------------------------------------\n");
        for (int i = 0; i < count; i++)
        {
            printf("|%.3d\t| %s %s %s\t| %2.6s %2.6s\t|\n", s[i].id, s[i].surName, s[i].middleName, s[i].name, s[i].name, s[i].surName);
        }
    }

    void Add(struct student s[])
    {
        printf("Enter number of student: ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            fflush(stdin);
            s[i].id = i + 1;
            printf("\nEnter name of student %d.\n", i + 1);
            printf("Enter surname: ");
            scanf("%s", &s[i].surName);
            printf("Enter middle name: ");
            scanf("%s", &s[i].middleName);
            printf("Enter name: ");
            scanf("%s", &s[i].name);
            count++;
        }
        Show(s, count);
    }

    // void Sort(struct student s[])
    // {
    //     for (int i = 0; i < count; i++)
    //     {
    //         for (int j = 1; j < count; j++)
    //         {
    //             if (s[i].name < s[j].name)
    //             {
    //             }
    //         }
    //     }
    //     Show(s, count);
    // }

    struct Student StudentsAPI[MAX];

    printf("==========================\n");
    printf("           MENU           \n");
    printf("==========================\n");
    printf("1. Add Student Name\n");
    printf("2. Search Student Name\n");
    printf("3. Sort Student Names\n");
    printf("4. Normalize Student Name\n");
    printf("5. Show All Students\n");
    printf("6. Exit\n");
    printf("==========================\n");
    printf("Choose Option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        if (file == NULL)
        {
            return 1;
        }
        printf("Enter number of student you want to add: ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            printf("Enter student name: ");
        }
        for (int i = 0; i < n; i++)
        {
        }
        break;
    case 2:
        // printf("Enter name you want to search: ");
        // scanf("%s", searchName);
        // Search(s, searchName);
        break;
    case 3:
        // Sort(s, count);
        break;
    case 4:

        break;
    case 5:
        // Show(s, count);
        Exercise3();
        break;
    case 6:
        break;

    default:
        printf("Enter Number only from 1-6 \n");
        Exercise3();
        break;
    }
    // void AddStudentName()
    // {
    // }
}

int main()
{
    // Exercise1();
    Exercise2();
    // Exercise3();
    return 0;
}