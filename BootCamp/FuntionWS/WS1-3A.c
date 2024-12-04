#include <stdio.h>

void helloWorld();
void story();
void age();
int ageInput();

int main ()

{
    int menu, anwser;
    do
    {
        printf("\t--MENU--");
        printf("\n1) Workshop 1 (Print HelloWorld)\n2) Workshop 2 (Print a story) \n3) Workshop 3 (Print my age and type an age)\n4) EXIT\n");
        scanf("%i", &menu);
            switch(menu)
            {
                case 1: 
                    helloWorld();
                break;
                case 2:
                    story();
                break;
                case 3: 
                    age();
                    ageInput();
                break;
                case 4:
                    printf("Goodbye");
                    anwser == 0;
                break;
            }
        printf("\nContinue? 1/0");
        scanf("%i", &anwser);

    } while (anwser != 0);
}
void helloWorld()
{
    printf("Hello World!");    
}
 
void story()
{
    printf("Hello, my name is Johan and i am 30 years old. I have just started programming in C and this is me using funtions on old applications. BYE");    
}

void age()
{
    int age = 30;
    printf("This is my age: %i", age);
}
int ageInput()
{
    int age;
    printf("What is your age? ");
    scanf("%i", &age);
    printf("\nYou entered: %i", age);  
    return age;
}