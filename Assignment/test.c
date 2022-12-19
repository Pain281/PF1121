#include <stdio.h>
#define MAX 100

struct contactInfo
{
    char *name;
    char *phone;
};

int main()
{
    // struct contactInfo a[MAX];
    // struct contactInfo contact;

    // a[0].name = "vdw dwdwa na";
    // a[0].phone = "0932323242";

    // a[1].name = "ferfewr f";
    // a[1].phone = "9043043433";

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("%s", a[i].name);
    // }

    // FILE *fp, *ft;

    // char a[] = "hello world!";
    // char b[MAX];

    // fp = fopen("contact.txt", "w+");

    // fwrite(&a, 1, sizeof(a), fp);

    
    // printf("%s", b);

    // fclose(fp);

   FILE *fp;
   char buff[255];

   fp = fopen("contact.txt", "r");
   fgets(buff, sizeof(buff), fp);
   printf("1: %s\n", buff);

   fclose(fp);

    return 0;
}