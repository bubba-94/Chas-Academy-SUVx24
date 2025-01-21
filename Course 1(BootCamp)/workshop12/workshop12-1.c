#include <stdio.h>

struct info 
{
    int id; 
    char name[40];
};


int main () 
{
    struct info p1 = {123,"Kim"}; 
    //struct info p2 = ;

    printf("%i\n", p1.id);
    printf("%s", p1.name);
}