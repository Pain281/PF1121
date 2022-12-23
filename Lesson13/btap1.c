
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct name
{
    char firstname[20];
    char midname[20];
    char lastname[20];
};

struct student
{
    int no;
    struct name fullname;
    int age;
    char sex[10];
};

void inputfullname(struct name *name)
{
    printf("Firstname: ");
    scanf("%s", name->firstname);
    printf("Midname: ");
    getchar();
    gets(name->midname);
    printf("Lastname: ");
    scanf("%s", name->lastname);
}

struct student inputSt()
{
    struct student st;
    printf("input no: ");
    scanf("%d", &st.no);
    inputfullname(&st.fullname);
    printf("age: ");
    scanf("%d", &st.age);
    printf("sex: ");
    scanf("%s", st.sex);
    return st;
}

void InputInfo(struct student st)
{
    printf("%-10d %-10s %-20s %-10s %-10d %-10s \n",
           st.no, st.fullname.firstname, st.fullname.midname, st.fullname.lastname, st.age, st.sex);
}

void Savefile(struct student *list, int checklist)
{
    FILE *fOut = fopen("st.txt", "a");
    int i;
    for (i = 0; i < checklist; i++)
    {
        struct student st = list[i];
        fprintf(fOut, "%-10d %-10s %-20s %-10s %-10d %-10s \n",
                st.no, st.fullname.firstname, st.fullname.midname, st.fullname.lastname, st.age, st.sex);
    }
    fclose(fOut);
}

void showColumn()
{
    printf("%-10s %-10s %-20s %-10s %-10s %-10s\n",
           "no", "Firstname", "midname", "lastname", "age", "sex");
}
int main()
{
    struct student listst[100];
    int checklist = 0;
    int choice;

    do
    {
        printf("=============== MENU ===============");
        printf("\n1. Add student");
        printf("\n2. Dislay all student.");
        printf("\n3. Save data.");
        printf("\n4. Exit.");
        printf("\nChoice: ");

        scanf("%d", &choice);
        struct student st;
        int i;
        switch (choice)
        {
        case 0:
            break;

        case 1:
            st = inputSt();
            listst[checklist++] = st;
            break;

        case 2:
            showColumn();
            for (i = 0; i < checklist; i++)
            {
                InputInfo(listst[i]);
            }
            break;
        case 3:
            Savefile(listst, checklist);
            printf(" Save access");
            break;
        default:
            printf("False.........\n");
            break;
        case 4:
            printf("\nExiting... Success!\n");
            exit(0);
            break;
        }

    } while (choice);

    return 0;
}