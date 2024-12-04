
#include <stdio.h>

int main ()
{
    int units = 0;
    float price = 0.0;

    printf("How many units have you used? ");
    scanf("%d", &units);

    if (units <= 100){
        price = units * 0.25;   
    }
    else if (units <= 200){
        price = (units - 100) * 0.75 + 100 * 0.25; 
    }
    else if (units <= 500){
        price = (units - 200) * 1.5 + 100 * 0.25 + 100 * 0.75;
    }
    else if (units > 500){
        price = (units - 500) * 4 + 100 * 0.25 + 100 * 0.75 + 300 * 1.5;    
    }

    printf("\nTotal cost equals: %.2f\n", price);
}