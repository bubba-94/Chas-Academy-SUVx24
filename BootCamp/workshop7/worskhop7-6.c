#include <stdio.h>
#include <math.h>

int main ()
{
    int i = 0;
    int input;
    float numberOne, numberTwo, total;
    while(i < 1)
    {
    printf("\n--MENU--\n0) EXIT\n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Square root of two given numbers\n6) Power off x^y\n");
    scanf("%i", &input);

        switch (input)
        {
            case 0:

                printf("\nBye, try again later.");
                i++;
                break;
            case 1:

                printf("Addition! Type two float numbers: (with space inbetween)\n");
                scanf("%f %f", &numberOne, &numberTwo);
                total = numberOne+numberTwo;
                printf("\n%.2f + %.2f = %.2f\n", numberOne, numberTwo, total);
                break;
            case 2:

                printf("Subtraction! Type two float numbers: (with space inbetween)\n");
                scanf("%f %f", &numberOne, &numberTwo);
                total = numberOne-numberTwo;
                printf("\n%.2f - %.2f = %.2f\n", numberOne, numberTwo, total);
                break;
            case 3:

                printf("Multiplication! Type two float numbers: (with space inbetween)\n");
                scanf("%f %f", &numberOne, &numberTwo);
                total = numberOne*numberTwo;
                printf("\n%.2f * %.2f = %.2f\n", numberOne, numberTwo, total);
                break;
            case 4:

                printf("Division! Type two float numbers: (with space inbetween)\n");
                scanf("%f %f", &numberOne, &numberTwo);
                total = numberOne/numberTwo;
                if (numberTwo == 0) printf("You cannot divide by zero, try again!\n"); continue;
                printf("\n%.2f / %.2f = %.2f\n", numberOne, numberTwo, total);
                break;
            case 5:

                printf("Print two numbers and we'll print out the square root: \n");
                scanf("%f %f", &numberOne, &numberTwo);
                total = numberOne+numberTwo;
                printf("\nSquare root of %.2f = %.4f", total, sqrt(total));
                break;
            case 6:

                printf("Print two numbers and we'll print out the power off x^y: \n");
                scanf("%f %f", &numberOne, &numberTwo);
                printf("\n%.2f ^ %.2f = %.4f", numberOne, numberTwo, pow(numberOne,numberTwo));
                break;
            default:
                printf("Try again!");

        
    }
}