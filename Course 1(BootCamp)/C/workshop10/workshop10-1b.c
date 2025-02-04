#include <stdio.h>

int printName(int times)
{
    for(int i = 0; i < times; i++)
    {
        printf("%i. My name is Johan Modin\n", i+1);
    }
    return 0;
}

int main ()
{
    int times;
    printf("How many times do you want to write your \" My name is Johan Modin\"? \n");
    scanf("%i", &times);
    printName(times);
}

