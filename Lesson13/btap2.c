
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sentence[1000];
    FILE *fptr;

    fptr = fopen("text.txt", "w");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter a sentence:\n");
    gets(sentence);
    strupr(sentence);
    printf("Chuoi chu hoa la: %s", sentence);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    return 0;
}