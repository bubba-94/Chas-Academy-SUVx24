#include <stdio.h>
void mainMenu();
int menuSelection();
void input(int* x, int* y);
int add(int x,int y);
int sub(int x,int y);
int div(int x,int y);
int mult(int x,int y);

int main ()
{
    int running;
        do
        {
        mainMenu();
        printf("\nContinue? 1/0\n");
        scanf("%i", &running);
        } while (running != 0);
        printf("BYE!");
}
void mainMenu()
{
    int x,y;
    printf("\t---MENU---\n\t1) Addition\n\t2) Subtraction\n\t3) Multiplication\n\t4) Division\n\t");
    switch(menuSelection())
    {
        case 1:
            printf("You chose addition!\n");
            input(&x,&y);
            add(x,y);
        break;
        case 2:
            printf("You chose subtraction!\n");
            input(&x,&y);
            sub(x,y);
        break;
        case 3:
            printf("You chose multiplication!\n");
            input(&x,&y);
            mult(x,y);
        break;
        case 4:
            printf("You chose division!\n");
            input(&x,&y);
            div(x,y);
        break;
    }
}
void input(int* x, int* y)
{  
    printf("Type two numbers: ");
    scanf("%i %i", x,y);    
}
int menuSelection()
{
    int select;
    printf("\n\tSelect an option:");
    scanf("%i", &select);
    return select;
}
int add(int x,int y)
{   
    int sum = x+y;
    printf("\n%i + %i = %i", x,y,sum);
    return sum;
}
int sub(int x,int y)
{   
    int sum = x-y;
    printf("\n%i - %i = %i", x,y,sum);
    return sum;
}
int mult(int x,int y)
{   
    int sum = x*y;
    printf("\n%i * %i = %i", x,y,sum);
    return sum;
}
int div(int x,int y)
{   
    int sum = x/y;
    printf("\n%i / %i = %i", x,y,sum);
    return sum;
}