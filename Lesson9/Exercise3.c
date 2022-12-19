#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int search(char *value, int count, char *a[]);
// int binarySearch(char value[], int count, char *a[]);
int menu();
// int delete(char *a[], int *count, int position);
void selectionSort(int count, char *a[]);
void nomalizeName(char *str);

int main(int countArgs, char **args)
{
    // init array
    char *a[MAX];
    int i, count = 0, choice;
    int foundIndex = -1;
    char value[51];
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            printf("Insert new element:\n");
            printf(" names[%d] = ", count);
            a[count] = (char*)malloc(51);
            fflush(stdin);
            gets(a[count]);
            count++;
            break;
        case 2:
            printf("Search element:\n value = ");
            fflush(stdin);
            gets(value);
            foundIndex = search(value, count, a);
            if (foundIndex < 0)
            {
                printf("%s not found in array.\n", value);
            }
            else
            {
                printf("%s found at index %d in array\n", value, foundIndex);
            }
            break;
        case 3:
            printf("Sorting... ");
            selectionSort(count, a);
            printf("is complete.\n");
        case 4:
            break;
        case 5:
            printf("Display Array:\n");
            for (i = 0; i < count; i++)
            {
                printf("%s\n", a[i]);
            }
            break;
        case 6:
            printf("Exit App...\n");
            break;
        }
        printf("Press enter key to continue...");
        fflush(stdin);
        getchar();
    } while (choice != 6);

    return 0;
}
void selectionSort(int count, char *a[]){
    int lowIndex, i, j;
    char temp[51];
    for(i=0; i<count-1;i++){
        lowIndex = i;
        for(j=i+1; j<count;j++){
            if(strcmp(a[j],a[lowIndex])<0){
                lowIndex = j;
            }
        }
        if(lowIndex>i){
            strcpy(temp, a[i]);
            strcpy(a[i], a[lowIndex]);
            strcpy(a[lowIndex], temp);
        }
    }
}
int menu()
{
    int choice;
    printf("-------------------------\n");
    printf(" MENU\n");
    printf("-------------------------\n");
    printf("1. Add Student Names\n");
    printf("2. Search Student Names\n");
    printf("3. Sort Student Names\n");
    printf("4. Normalize Student Names\n");
    printf("5. Display All\n");
    printf("6. Exit\n");
    printf("-------------------------\n");
    printf("Your choice: ");
    do
    {
        fflush(stdin);
        scanf("%d", &choice);
        if (choice < 1 || choice > 6)
        {
            printf("Invalid choice, input choice again: ");
        }
    } while (choice < 1 || choice > 6);
    return choice;
}
int search(char *value, int count, char *a[])
{
    int foundIndex = -1;
    for (int i = 0; i < count; i++)
    {
        if (!strcmp(value, a[i]))
        {
            foundIndex = i;
            break;
        }
    }
    return foundIndex;
}