#include <stdio.h>

int main()
{
// Bytte > mot <, annars blir det en evighetsloop eftersom i kommer vara högre än 0
for(int i = 0; i >= 0; i++)
{
    printf("\nProgramming in C is fun!");
}
return 0;
}

