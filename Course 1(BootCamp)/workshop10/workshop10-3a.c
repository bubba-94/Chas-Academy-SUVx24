#include <stdio.h>

char printLine(char symbol);

int main ()
{
    char symbol;
    printf("What symbol would you like to use? A single character: ");
    scanf("%c", &symbol);

    printLine(symbol);
    printf("\n\t\t\tC Programming Language Author(s)\n");
    printLine(symbol);
    printf("\n\t\t1. Brian W. Kernighan\n\t\t2. Dennis M. Ritchie");

}

char printLine(char symbol)
{
    for (int i = 0; i < 80; i++)
    {
        printf("%c", symbol);
    }
    return symbol;
}