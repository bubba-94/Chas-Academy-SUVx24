#include <stdio.h>

int main ()
{
    int n = 100;
    while (n > 0)
    {
        switch(n % 2 == 0)
        {
            printf("Even number: %i", n);
        }
        n--;
    }
}