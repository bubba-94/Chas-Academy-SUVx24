#include <stdio.h>

int main ()
{
    for(int i = 1; i < 99; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even number: %i\n", i);
        }
        else if (i % 2 != 0)
        {
            printf("Odd number: %i\n", i);
        }

    }
}