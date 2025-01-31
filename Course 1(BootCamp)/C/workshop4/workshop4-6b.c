#include <stdio.h>

int main ()
{
    const double PI = 3.1415;
    int heightInput, radius;
    printf("Whats the height of the cylinder?");
    scanf("%d", &heightInput),
    printf("\nWhats the radius of the cylinder?");
    scanf("%d", &radius);
    float cylinderVolume = (radius * radius * PI) * heightInput;
    printf("\nThe total volume equals: %f cm", cylinderVolume);
}