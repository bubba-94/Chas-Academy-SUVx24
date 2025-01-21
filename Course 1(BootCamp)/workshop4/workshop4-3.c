#include <stdio.h>

int main () 
{
int a = 24, b = 15, c = 33;
printf("%d", (a < b && a > c)); 
printf("\n%d", (a < b || a > c));
printf("\n%d", !(a < b && a > c));
printf("\n%d", !(a < b ||a > c));
return 0;

}