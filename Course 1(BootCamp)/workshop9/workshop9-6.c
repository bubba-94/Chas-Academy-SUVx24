#include <stdio.h>

int main () 
{
    /*
    char firstName[20];
    char lastName[20];
    scanf("%s %s", firstName, lastName);
    printf("%s %s", firstName, lastName);
    */

   char name[40];
   printf("Type your full name: ");
   fgets(name, sizeof(name), stdin); 
   printf("Your full name is: ");
   puts(name);
}
