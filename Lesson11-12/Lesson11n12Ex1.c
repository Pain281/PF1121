#include <stdio.h>
#include <string.h>

struct Mark
{
    char subject[50];       // store the subject name
    double theoreticaltest; // store the theoretical test scores
    double practicaltest;   // store the practical test scores
};

void printMark(struct Mark mark);
struct Mark getMark();
void getString(char *str, int length);
void printLine();
void printTilte();

int main()
{
    int i, count = 3;
    struct Mark mark[3] = {
        {"Math", 7, 8},
        {"English", 9, 6}};

    printf("Input Subject: \n");
    mark[2] = getMark();

    printTilte();
    for (i = 0; i < count; i++)
    {
        printMark(mark[i]);
    }
    printLine();

    return 0;
}

struct Mark getMark()
{
    struct Mark mark;
    printf("SUbject name: ");
    getString(mark.subject, 50);
    printf("Theoretical test scores: ");
    scanf("%lf", &mark.theoreticaltest);
    printf("Practical test scores: ");
    scanf("%lf", &mark.practicaltest);
    return mark;
}

void printMark(struct Mark mark)
{
    printf("| %-20s | %26.2f | %26.2f |\n",
           mark.subject, mark.theoreticaltest, mark.practicaltest);
}

void printLine()
{
    printf("+-%-20s-+-%-26s-+-%-26s-+\n",
           "--------------------", "--------------------------", "--------------------------");
}

void printTilte()
{
    printLine();
    printf("| %-20s | %-26s | %-26s |\n", "Subject", "Theoretical test scores",
           "Practical test scores");
    printLine();
}

void getString(char *str, int length)
{
    fseek(stdin, 0, SEEK_END);
    fflush(stdin);
    fgets(str, length, stdin);
    str[strlen(str) - 1] = '\0';
    fseek(stdin, 0, SEEK_END);
    fflush(stdin);
}
