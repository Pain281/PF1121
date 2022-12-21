#include <stdio.h>

void Backtracking(int i) // 0 => 1 => 2 => 3
{
    if (i == 3) // 3
        return; // return
    printf("Welcome %d\n", i); // 0 => 1 => 2
    i++; // 1 => 2 => 3
    Backtracking(i); // 1 => 2 => 3 => 2 => 1
    i--; // 2 => 1 => 0
    printf("Goodbye %d\n", i); // 2 => 1 => 0
}

int main()
{
    int i = 0;
    Backtracking(i);
    return 0;
}