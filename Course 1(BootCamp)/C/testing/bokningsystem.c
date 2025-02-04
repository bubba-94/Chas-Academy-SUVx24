#include <stdio.h>
#include <stdbool.h>

bool* menuRunning(bool* running);
void mainMenu();
int menuSelect();

int main ()
{   
    bool* running;
    bool* run = menuRunning(&running);
    do
    {

        mainMenu();

    }while (*run != false);
}

void mainMenu()
{   
    bool* running;
    bool* run = menuRunning(&running);
    printf("\n1) Add new booking\n2) Clear all bookings\n3) Exit");
    printf("\n\nSelect an option: ");
    switch (menuSelect())
    {
        case 1: 
            printf("Success");
        break;
        case 2:
        break;
        case 3:
            printf("GOODBYE!");
            *run = false;
        break;
    }
}
int menuSelect()
{
    int select;
    scanf("%i", &select);
    if(select < 1 && select > 3) return printf("\nPlease choose from the following options.\n ");
    else  
    return select;
}

bool* menuRunning(bool *running)
{
    *running = true;
    return running;
}