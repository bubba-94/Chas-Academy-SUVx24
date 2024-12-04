#include <stdio.h>
#include <stdbool.h>
int main ()
{
    float degreeInput;
    char menuSelect;
    bool running = true;
    while(running)
    {
        printf("\n-- MENU -- \n1) Convert from C to F\n2) Convert from F to C\n3) Exit\n");
        scanf("%c", &menuSelect);
            switch (menuSelect)
            {
                case '1': // Convert from C to F.
                    printf("Print the specified celsius degree you want to convert:\n");
                    scanf("%f", &degreeInput);
                    printf("\n%.2f degrees F\n", degreeInput * (9/5) + 32);
                break;
                case '2': // Convert from F to C
                    printf("Print the specified FAHRENHEIT degree you want to convert:\n");
                    scanf("%f", &degreeInput);
                    printf("\nEquals too :%.2f degrees C\n", degreeInput * (9/5) - 32);
                break;
                case '3': // Exit
                    printf("Goodbye!");
                    running = false;
                break;
                default:
                    printf("\nCant understand that, try again\n");
                break;
            }
    }
    }