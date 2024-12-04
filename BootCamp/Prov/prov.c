#include <stdio.h>

int returnArr(char *nameArr);
int main ()
{
    char nameArr[10];
    printf("Type your name: ");
    scanf("\n%s", nameArr);
    printf("%i", returnArr(*nameArr));
}
int returnArr(char *nameArr)
{
    int total;
    for (int i = 0; i < sizeof(nameArr); i++)
    {
        total++;
    }
    return total;
}
 