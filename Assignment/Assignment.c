#include <stdio.h>

struct Contact
{
    char
        firstName[10],
        middleName[10],
        lastName[10],
        company[10],
        phone[10],
        email[20],
        address[20],
        birthday[10],
        website[20],
        note[20];
};

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

int SearchContact()
{
    printf("----------------------------------------\n");
    printf("| No  |                      Full Name |\n");
    printf("----------------------------------------\n");
    printf("| %2d  | %30s |\n", 1, "Nguyen Thien An");
    printf("| %2d  | %30s |\n", 1, "Nguyen Van A");
    printf("| %2d  | %30s |\n", 1, "Nguyen Van Z");
    printf("----------------------------------------\n");
}

int AddContact()
{
    printf(" CREATE NEW CONTACT\n");
    printf("========================================\n");
    printf(" First Name:  \n");
    printf(" Middle Name: \n");
    printf(" Last Name:   \n");
    printf(" Company:     \n");
    printf(" Phone:       \n");
    printf(" Email:       \n");
    printf(" Address:     \n");
    printf(" Birthday:    \n");
    printf(" Website:     \n");
    printf(" Note:        \n");
    printf("========================================\n");
}

int main()
{
    switch (MainMenu())
    {
    case 1:
        SearchContact();
        break;
    case 2:
        AddContact();
        break;
    case 3:
        printf("enter");
        break;

    default:
        break;
    }

    return 0;
}