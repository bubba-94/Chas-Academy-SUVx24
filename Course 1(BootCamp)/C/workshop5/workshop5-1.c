#include <stdio.h>

int main ()
{
int a = 0, b = 0;

    printf("Type a number: ");
    scanf("%i" , a);
    printf("\nType a second number: ");
    scanf("%i", b);

if (a > b)
{
    printf("\nFirst number is higher.");
}
else
{
    printf("\nSecond number is higher.");
}
}