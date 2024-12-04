#include <stdio.h>

int main ()
{
    int n = 0;
    int table;
    int equations;
    while (n < 1)
    {
        printf("Which table do you want to print? And how many equations?\n");
        scanf("%i %i", &table, &equations);
            for (int i = 1; i <= equations; i++)
            {
                printf("%i. %i * %i = %i\n" ,i,table ,i, table * i);
            }
            char anwser;
            printf("Do you want to try again? Y/N\n");
            scanf("%c", &anwser);
                if (anwser == 'y' || anwser == 'Y')
                {
                    continue;
                }
                else if (anwser == 'n' || anwser == 'N')
                {
                    n++;
                }     
    }
}