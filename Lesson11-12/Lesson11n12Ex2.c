#include <stdio.h>
#include <string.h>

struct Product
{
    char name[50];
    double quantity;
    double price;
};

void printProduct(struct Product product);
struct Product getProduct();
void getString(char *str, int length);
void printLine();
void printTilte();

int main()
{
    int i, count = 5;
    struct Product product[5];

    for (i = 0; i < count; i++)
    {
        printf("\nInput Product %d\n", i + 1);
        product[i] = getProduct();
    }

    printTilte();
    for (i = 0; i < count; i++)
    {
        printProduct(product[i]);
    }
    printLine();

    return 0;
}

struct Product getProduct()
{
    struct Product product;
    printf("Product name: ");
    getString(product.name, 50);
    printf("Quantity: ");
    scanf("%lf", &product.quantity);
    printf("Price: ");
    scanf("%lf", &product.price);
    return product;
}

void printProduct(struct Product product)
{
    printf("| %-20s | %16.2f | %16.2f |\n",
           product.name, product.quantity, product.price);
}

void printLine()
{
    printf("+-%-20s-+-%-16s-+-%-16s-+\n",
           "--------------------", "----------------", "----------------");
}

void printTilte()
{
    printLine();
    printf("| %-20s | %-16s | %-16s |\n", "Product", "Quantity", "Price");
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
