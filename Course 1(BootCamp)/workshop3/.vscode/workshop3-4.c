#include <stdio.h>


int main ()

{
   int length, width, area, circumference;

   printf("Enter length dirst, then width (with SPACE inbetween): ");
   scanf("%d %d", &length, &width);
   area = length * width;
   circumference = length + width + length + width; 
   
   printf("The area is: %d", area);
   printf("\nThe circumderence is: %d", circumference);

}