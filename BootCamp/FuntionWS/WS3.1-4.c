#include <stdio.h>

float askLength();
char grade();
int numbers();
int geometri();

int main()
{
    int menu, anwser;
    do
    {
        printf("\t--MENU--");
        printf("\n1) Workshop 1 (Length)\n2) Workshop 2 (Grade) \n3) Workshop 3 (Add two integers)\n4) Workshop 4 (Area and circumference)\n4) EXIT\n");
        scanf("%i", &menu);
            switch(menu)
            {
                case 1: 
                    askLength();
                break;
                case 2:
                    grade();
                break;
                case 3: 
                    numbers();
                break;
                case 4:
                    printf("Type two numbers: (with space inbetween)\n");
                    int x,y;
                    scanf("%i %i", &x,&y);
                    geometri(x,y);
                break;
                case 5:
                    printf("Goodbye\n");
                    anwser == 0;
                break;
            }
        printf("\nContinue? 1/0\n");
        scanf("%i", &anwser);

    } while (anwser != 0);
}
float askLength()
{
    printf("Enter a length: ");
    float length;
    scanf("%f", &length);
    printf("\nYou are %.2f cms tall", length);
    return length;
}
char grade()
{
    char grade;
    printf("Enter your grade: \n");
    scanf("%c", &grade);
    printf("You saved: ");
    return grade;
}
int numbers(int x, int y)
{
    printf("Print two numbers: ");
    scanf("%i %i", &x, &y);
    printf("Added together: %i", x+y);
    return 0;        
}
int geometri(int x, int y)
{
    printf("The area is: %i", x*y);
    printf("\nThe circumference is: %i", x+x+y+y);
    return 0;
}