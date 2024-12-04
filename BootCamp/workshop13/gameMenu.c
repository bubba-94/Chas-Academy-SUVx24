#include <stdio.h>

int main () 
{  
    while (1)
    {
        char gameMenu;
        printf("--GAME MENU--");
        printf("\n1) Game 1\n2) Game 2\n3) Game 3\n Choose what game to play: ");
        scanf("%c", gameMenu);

        switch(gameMenu)
        {
            case '1':

            break;
            case '2':

            break;
            case '3':

            break;

            default:
                printf("\nTry choosing from game 1 - 3");
            break;
        }
    }
}