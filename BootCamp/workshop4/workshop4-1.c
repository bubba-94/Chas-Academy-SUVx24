#include <stdio.h>

int main ()

{
    const float PI = 3.1415;
    float radius, area, circumference;   
    printf("Enter the radius of the cricle in cms.");
    scanf("%f", &radius);
    area = radius * radius * PI;
    circumference = radius * 2 * PI;
    printf("\nThe are of the cirlce is: %f cms", area);
    printf("\nThe circumference of the circle is: %f cms", circumference);
}