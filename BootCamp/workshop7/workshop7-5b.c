#include <stdio.h>

int main ()
{
    float degree = 0.0;
    int n = 0;
    char selection;
        // Svar på fråga 8.5 = För att vi vet inte antalet gånger som användaren vill avnända sig utav koden.
    while (n < 1)
    {
        printf("\nFrom which scale do you want to convert? Type C or F:\n");
        scanf("%c", &selection);
        printf("How many degrees?\n");
        scanf("%f", &degree);
            if (selection == 'C' || selection == 'c')
            {
                printf("\n%.0f C' equals %.2f F'", degree, (degree * 9/5) + 32);
                printf("\nWould you like to try again? Y/N\n");
                scanf("%c", &selection);
                if(selection == 'Y' || selection == 'y') n = 0;
                else if(selection == 'N' || selection == 'n') n = 1;
            }
            else if (selection == 'F' || selection == 'f')
            {
                printf("\n%.0f F' equals %.2f C'", degree, (degree * 9/5) - 32);
                printf("\nWould you like to try again? Y/N\n");
                scanf("%c", &selection);
                if(selection == 'Y' || selection == 'y') n = 0;
                else if(selection == 'N' || selection == 'n') n = 1;
            }   
    }
    return 0;
}