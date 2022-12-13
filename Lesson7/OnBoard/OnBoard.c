#include <stdio.h>
#define MAX 100

void MenuDisplay()
{
    printf("----------------------------------------\n");
    printf("|                 MENU                 |\n");
    printf("----------------------------------------\n");
    printf("|1. Insert                             |\n");
    printf("|2. Update                             |\n");
    printf("|3. Delete                             |\n");
    printf("|4. Display                            |\n");
    printf("|5. Search                             |\n");
    printf("|6. Sort                               |\n");
    printf("|7. Exit                               |\n");
    printf("----------------------------------------\n");
    printf("Your choice: ");
}

int Insert(int count, int a[], int n)
{
    printf("The number of elements you want to add: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Input an element a[%d] = ", count);
        fflush(stdin);
        scanf("%d", &a[count]);
        count++;
    }
    return a[n];
}

void Update(int id, int updateValue, int count, int a[])
{
    printf("Display id of Array: ");
    for (int i = 0; i < count; i++)
    {
        printf(" %d ", i);
    }
    printf("\nDisplay Array:     [ ");
    for (int i = 0; i < count; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("]\n");
    printf("Enter the id you want to update: ");
    scanf("%d", &id);
    printf("Enter update value: ");
    scanf("%d", &updateValue);
    for (int i = 0; i < count; i++)
    {
        if (a[i] == a[id])
        {
            a[i] = updateValue;
        }
    }
    printf("...\nUpdate success!\n");
}

void Delete(int id, int count, int a[], int n)
{
    printf("Enter id you want to delete: ");
    scanf("%d", &id);
    if (id < 0)
    {
        printf("Please re-enter id you want to delete: ");
    }
    else if (id >= count)
    {
        id = count - 1;
    }
    for (int i = id; i < count - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("Delete success!\n");
}

void Display(int i, int count, int a[])
{
    printf("Display Array: \n[");
    for (i = 0; i < count; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("]\n");
}

void Search(int value, int foundIndex, int count, int a[], int i)
{
    printf("Search element, value = ");
    scanf("%d", &value);
    foundIndex = -1;
    for (i = 0; i < count; i++)
    {
        if (a[i] == value)
        {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex < 0)
    {
        printf("%d Not found in array.\n", value);
    }
    else
    {
        printf("%d found at index %d in array\n", value, foundIndex);
    }
}

void Sort(int count, int a[])
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sort success!\n");
}

int main()
{
    // init array
    int n = MAX, a[n], i, count = 0, choice, id, updateValue, value, foundIndex = -1;

    do
    {
        MenuDisplay();
        fflush(stdin);
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("The number of elements you want to add: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Input an element a[%d] = ", count);
                fflush(stdin);
                scanf("%d", &a[count]);
                count++;
            }
            break;
        case 2:
            Update(id, updateValue, count, a);
            break;
        case 3:
            Delete(id, count, a, n);
            break;
        case 4:
            Display(i, count, a);
            break;
        case 5:
            Search(value, foundIndex, count, a, i);
            break;
        case 6:
            Sort(count, a);
            break;
        case 7:
            printf("Exit App...\n");
            break;
        default:
            printf("Invalid choice!");
            break;
        }
        printf("Press enter key to continue..");
        fflush(stdin);
        getchar();
    } while (choice != 7);

    return 0;
}