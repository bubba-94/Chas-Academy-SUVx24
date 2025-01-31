#include <stdio.h>
#include <string.h>

int main ()
{
    // Kopiera en sträng till en annan variabel
    char c[50];
    printf("Type a new string: \n");
    fgets(c, sizeof(c),stdin);
    char d[50];

    // -> stället det kopierar till först.
    strcpy(d,c);
    puts(c);
    puts(d);
    // Skriver ut söm som matas in.
}
