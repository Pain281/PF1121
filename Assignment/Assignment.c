#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct ContactInfo
{
    char name[30];
    char company[20];
    char phone[10];
    char email[20];
    char address[20];
    char birthday[10];
    char website[20];
    char note[20];
    int status;
} ContactInfo;

int MainMenu();

int SearchContact();

int AddContact(int n, ContactInfo *a[]);

void GetAll(int n, ContactInfo *a[]);

void Detail(int no, ContactInfo *a[]);

int DetailMenu();

void Line();

int main()
{

    // FILE *fp;
    int count = 0, choice, detailChoice, temp;
    ContactInfo *a[MAX];
    ContactInfo contact;
    int no;
    do
    {
        int choice = MainMenu();
        switch (choice)
        {
        case 1:
            SearchContact();
            break;
        case 2:
            fflush(stdin);
            a[count] = (ContactInfo *)malloc(8 * count);
            printf(" CREATE NEW CONTACT\n");
            Line();
            printf(" \nName: ");
            gets(a[count]->name);
            printf(" \nCompany: ");
            fflush(stdin);
            gets(a[count]->company);
            printf(" \nPhone: ");
            fflush(stdin);
            gets(a[count]->phone);
            printf(" \nEmail: ");
            fflush(stdin);
            gets(a[count]->email);
            printf(" \nAddress: ");
            fflush(stdin);
            gets(a[count]->address);
            printf(" \nBirthday: ");
            fflush(stdin);
            gets(a[count]->birthday);
            printf(" \nWebsite: ");
            fflush(stdin);
            gets(a[count]->website);
            printf(" \nNote: ");
            fflush(stdin);
            gets(a[count]->note);
            a[count]->status = 0;
            printf("\nSaving... Success!\n\n");
            count++;
            break;
        case 3:
            printf("Success!");
            break;
        case 4:
            GetAll(count, a);
            printf("INPUT CONTACT NO TO VIEWS DETAILS OR INPUT 0 TO BACK MAIN MENU: ");
            scanf("%d", &no);
            if (no == 0)
                break;
            no -= 1;
            Line();
            printf(" CONTACT DETAILS\n");
            Line();
            printf("Name:     %s\n", a[no]->name);
            printf("Company:  %s\n", a[no]->company);
            printf("Phone:    %s\n", a[no]->phone);
            printf("Email:    %s\n", a[no]->email);
            printf("Address:   %s\n", a[no]->address);
            printf("Birthday: %s\n", a[no]->birthday);
            printf("Website:  %s\n", a[no]->website);
            printf("Note:     %s\n", a[no]->note);
            Line();
            detailChoice = DetailMenu();
            switch (detailChoice)
            {
            case 1:
                a[no]->status = 1;
                break;
            case 2:
                Line();
                printf(" UPDATE CONTACT NO %d\n", no);
                Line();
                printf("Name: ");
                fflush(stdin);
                gets(a[no]->name);
                printf("\nCompany: ");
                fflush(stdin);
                gets(a[no]->company);
                printf("\nPhone: ");
                fflush(stdin);
                gets(a[no]->phone);
                printf("\nEmail: ");
                fflush(stdin);
                gets(a[no]->email);
                printf("\nAddress: ");
                fflush(stdin);
                gets(a[no]->address);
                printf("\nBirthday: ");
                fflush(stdin);
                gets(a[no]->birthday);
                printf("\nWebsite: ");
                fflush(stdin);
                gets(a[no]->website);
                printf("\nNote: ");
                fflush(stdin);
                gets(a[no]->note);
                Line();
                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                break;
            default:
                break;
            }
            Line();
            break;
        case 5:
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    } while (choice != 6);
    return 0;
}

int MainMenu()
{
    int choice;
    printf("========================================\n");
    printf(" --- VTC ACADEMY CONTACT MANAGEMENT ---\n");
    printf("========================================\n");
    printf("  1. SEARCH YOUR CONTACT\n");
    printf("  2. ADD CONTACT\n");
    printf("  3. DISPLAY FAVOURITES CONTACT\n");
    printf("  4. DISPLAY ALL CONTACT\n");
    printf("  5. EXIT APPLICATION\n");
    printf("========================================\n");
    printf(" #YOUR CHOICE: ");
    scanf("%d", &choice);
    printf("========================================\n");
    return choice;
}

int DetailMenu()
{
    int choice;
    printf(" 1. ADD TO FAVOURITES\n");
    printf(" 2. UPDATE\n");
    printf(" 3. DELETE\n");
    printf(" 4. ADD FIELD\n");
    printf(" 5. BACK TO MAIN MENU\n");
    Line();
    printf(" #CHOICE: ");
    scanf("%d", &choice);
    Line();
    return choice;
}

int SearchContact()
{
    printf("----------------------------------------\n");
    printf("| No  |                      Full Name |\n");
    printf("----------------------------------------\n");
    printf("| %2d  | %30s |\n", 1, "Nguyen Thien An");
    printf("| %2d  | %30s |\n", 1, "Nguyen Van A");
    printf("| %2d  | %30s |\n", 1, "Nguyen Van Z");
    printf("----------------------------------------\n");
    return 0;
}

int AddContact(int n, ContactInfo *a[])
{
    fflush(stdin);
    a[n] = (ContactInfo *)malloc(8 * sizeof(*a));
    printf(" CREATE NEW CONTACT\n");
    printf("========================================\n");
    printf(" \nName: ");
    gets(a[n]->name);
    printf(" \nCompany: ");
    fflush(stdin);
    gets(a[n]->company);
    printf(" \nPhone: ");
    fflush(stdin);
    gets(a[n]->phone);
    printf(" \nEmail: ");
    fflush(stdin);
    gets(a[n]->email);
    printf(" \nAddress: ");
    fflush(stdin);
    gets(a[n]->address);
    printf(" \nBirthday: ");
    fflush(stdin);
    gets(a[n]->birthday);
    printf(" \nWebsite: ");
    fflush(stdin);
    gets(a[n]->website);
    printf(" \nNote: ");
    fflush(stdin);
    gets(a[n]->note);
    printf("\nSaving... Success!\n\n");
}

void GetAll(int n, ContactInfo *a[])
{
    Line();
    printf("| No  |                      Full Name |\n");
    Line();
    for (int i = 0; i < n; i++)
    {
        printf("| %2d  | %30s |\n", i + 1, a[i]->name);
    }
    Line();
}

void Detail(int no, ContactInfo *a[])
{
    Line();
    printf(" CONTACT DETAILS\n");
    Line();
    printf("Name:     %s\n", a[no]->name);
    printf("Company:  %s\n", a[no]->company);
    printf("Phone:    %s\n", a[no]->phone);
    printf("Email:    %s\n", a[no]->email);
    printf("Address:  %s\n", a[no]->address);
    printf("Birthday: %s\n", a[no]->birthday);
    printf("Website:  %s\n", a[no]->website);
    printf("Note:     %s\n", a[no]->note);
    Line();
}

void Line()
{
    printf("----------------------------------------\n");
}