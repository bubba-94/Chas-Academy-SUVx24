#include <stdio.h>

char printLine(char symbol, int times);

int main ()
{
    int times;
    char symbol;
    printf("What symbol would you like to use? A single character: ");
    scanf("%c", &symbol);
    printf("And how many times?\n");
    scanf("%i", &times);

    printLine(symbol, times);
    printf("\n\t\t\tC Programming Language Author(s)\n");
    printLine(symbol, times);
    printf("\n\t\t1. Brian W. Kernighan\n\t\t2. Dennis M. Ritchie");
}

char printLine(char symbol, int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("%c", symbol);
    }
    return symbol;
}