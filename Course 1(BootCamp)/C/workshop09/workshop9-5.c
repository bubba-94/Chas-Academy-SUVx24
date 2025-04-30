#include <stdio.h>

int main ()
{
    int highest;
    int lowers;
    int times;
    int anwser;

    do
    {

    printf("How many integers do you want to save?\n");
    scanf("%i", &times);

    int arrNum [times];
    for (int i = 0; i < times; i++)
    {
        printf("Enter number %i: ", i+1);
        scanf("%d", &arrNum[i]);
    }
    for (int i = 0; i < times; i++)
    {
        if (arrNum[0] < arrNum [i])
        {
            arrNum[0] = arrNum[i];
        }
        else if (arrNum[1] > arrNum[i]) 
        {
            arrNum[1] = arrNum[i];
        }
    }
    printf("\nHighest number: %d", arrNum[0]);
    printf("\nLowest number: %d", arrNum[1]);
    printf("\nContinue? 1/0");
    scanf("\n%i", &anwser);
    }
    while (anwser == 1);
}