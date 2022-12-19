#include <stdio.h>
#define MAX 100

struct contactInfo
{
    int id;
    char name[30];
    char company[20];
    char phone[10];
    char email[20];
    char address[20];
    char birthday[10];
    char website[20];
    char note[20];
};

int MainMenu();

int SearchContact();

int AddContact();

int main()
{
    FILE *f;
    char *a[MAX];
    int count = 0;
    struct contactInfo contact;

    switch (MainMenu())
    {
    case 1:
        SearchContact();
        break;
    case 2:
        a[count] = (char *)malloc(51);

        fflush(stdin);
        f = fopen("contact.txt", "a");
        printf(" CREATE NEW CONTACT\n");
        printf("========================================\n");
        printf(" \nName: ");
        scanf("%s", &contact.name);
        printf(" \nCompany: ");
        scanf("%s", &contact.company);
        printf(" \nPhone: ");
        scanf("%s", &contact.phone);
        printf(" \nEmail: ");
        scanf("%s", &contact.email);
        printf(" \nAddress: ");
        scanf("%s", &contact.address);
        printf(" \nBirthday: ");
        scanf("%s", &contact.birthday);
        printf(" \nWebsite: ");
        scanf("%s", &contact.website);
        printf(" \nNote: ");
        scanf("%s", &contact.note);
        printf("========================================\n");
        main();
        
        break;
    case 3:
        break;

    default:
        break;
    }

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
}