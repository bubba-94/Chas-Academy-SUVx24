#include <stdio.h>
int main ()
{
        int anwser;
    do
    {
        int times;
        printf("\nHow many integers would you like to save?\n");
        scanf("%i", &times);
        int numberInput[times];
        printf("You have decided to declare %i values.", times);

            for (int i = 0; i < times; i++)
            {
                printf("\nEnter number %i: ", i + 1);
                scanf("%d", &numberInput[i]);
            }
            printf("You saved the numbers: ");
            for (int i = 0; i < times; i++)
            {
                printf("%d ", numberInput[i]);
            }

        printf("\nDo you want to continue? 1/0\n");
        scanf("%i", &anwser);
    }   
    while (anwser == 1);
    printf("Bye!");
}