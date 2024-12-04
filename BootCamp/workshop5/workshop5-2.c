#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("Type a number: ");
    scanf("%i", &a);
    
    printf("\nType a second number: ");
    scanf("%i", &b);
    
    printf("\nType a third number: ");
    scanf("%i", &c);

    if(a < b && a < c)
    {
        printf("First number is the lowest");
    }
    else if (b < a && b < c)
    {
        printf("Second number is the lowest");
    }
    else if (c < a && c < b)
    {
        printf("Third is the lowest.");
    }
    else
    {
        printf("They're the same.");
    }
}