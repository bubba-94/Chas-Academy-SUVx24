#include <stdio.h>

int main () 
{
    int n = 100;
    while (n > 0)
    {
        if(n % 2 == 0)
        {
            printf("\nEven numbers: %i", n);
        }
        n--;
    }
    n = 100;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            printf("\nOdd numbers: %i", n);
        }
        n--;
    }
    return 0;
}