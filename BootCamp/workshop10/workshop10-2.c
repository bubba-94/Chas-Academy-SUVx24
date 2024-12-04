#include <stdio.h>

void printLine();

int main ()
{

    printLine();
    printf("\n\t\t\tC Programming Language Author(s)\n");
    printLine();
    printf("\n\t\t1. Brian W. Kernighan\n\t\t2. Dennis M. Ritchie");

}

void printLine()
{
    for (int i = 0; i <= 80; i++)
    {
        printf("-");
    }
    return;
}