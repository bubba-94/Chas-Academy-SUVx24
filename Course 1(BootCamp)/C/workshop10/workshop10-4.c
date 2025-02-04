#include <stdio.h>

int returnValue(int n);

int main ()
{  
    int n = 0;
    printf("Variable n is now: %i", n);
    returnValue(n);
}

int returnValue(int n)
{
    while (n < 143)
    {
        n ++;
    }
    printf("\nVariable n is now: %i", n);
    return n;
}
