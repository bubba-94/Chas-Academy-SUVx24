#include <stdio.h>
#include <stdbool.h>

int main ()
{
    char input;
    int multiplicationTable;
    int times;
    bool running = true;
    while(running)
    {
    printf("\n-MENU SELECTION-\n1) Print a desired table\n2) Exit\n");
    scanf("\n%c", &input);

        switch (input)
        {
            case '1': 
                int n = 1;
                //New multiplication table
                printf("\nType your desired multiplication table:\n");
                scanf("\n%i", &multiplicationTable);
                printf("\nHow many equations do you want?\n");
                scanf ("\n%i", &times);
                while (n - 1 < times)
                {
                    printf("\n%i x %i = %i", multiplicationTable, n, multiplicationTable * n);
                    n++;
                }
                break;

            case '2': 
                //Exit the application
                printf("Goodbye!");
                running = false;
                break;

            default: 
                //Pick up mistyping
                printf("Can't quite understand that, try again"); 
                break;
        }
    } 
}