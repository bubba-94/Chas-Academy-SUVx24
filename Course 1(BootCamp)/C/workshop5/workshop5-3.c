#include <stdio.h>

int main ()
{
    int a, b, result, menuSelect;
    // Menu for different calculations.
    printf("Type the first integer:");
    scanf("%i", &a);

    printf("\nType the second integer ");
    scanf("%i", &b);
    
    printf("\nSelect from the menu\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division");
    scanf("%i", &menuSelect);



    switch(menuSelect)
    {
        case 1: 
            result = a + b;
            printf("Addition: %i", result);
            break;
        case 2:
            result = a -b; 
            printf("Subtraction: %i", result);
            break;
        case 3:
            result = a * b;
            printf ("Multiplication %i", result);
            break;
        case 4:
            result = a / b;
            printf ("Division: %i", result);
            break;
        default:
            printf("I did not quite understand that, try agian.");
    }
}