#include <stdio.h>

void Backtracking(int i)
{
    if (i == 3)
        return;
    printf("Welcome %d\n", i);
    i++;
    Backtracking(i);
    i--;
    printf("Goodbye %d\n", i);
}

int main()
{
    int i = 0;
    Backtracking(i);
    return 0;
}