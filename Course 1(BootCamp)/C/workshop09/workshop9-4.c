#include <stdio.h>

int main ()
{
    int times;
    int anwser;
    float total;
    do
    {
        printf("Calculate the avg value. How many integers would you like to include?\n");
        scanf("%i",&times);
        int numbers[times];
            for (int i = 0; i < times; i++)
            {
                printf("Enter number %i:", i+1);
                scanf("\n%d", &numbers[i]);
            }
            printf("\nYou entered: ");
            for (int i = 0; i < times; i++)
            {
                printf("%d ", numbers[i]);
                total += numbers[i];
            }
                printf("\nThe numbers added together is: %.2f and the avg is: %.2f", total, total / times);   
                printf("\n Do you wish to cotinue? 1/0");
                scanf("%i", &anwser);
    }while (anwser == 1);
    printf("Okay, BYE!");
}