#include <stdio.h>

int conversion(int x);

int main ()

{
    int x;
    printf("Type the radius: \n");
    scanf("%i", &x);
    conversion(x);
}

int conversion(int x)
{
    const float PI = 3.1415;
    float area,circumference;
    area = x * x * PI;
    circumference = x * 2 * PI;
    printf("Area = %.4f\nCircumference = %.4f", area, circumference);
    return 0;
}