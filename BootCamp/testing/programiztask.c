#include <stdio.h>

int* mult(int* x, int* y, int* sum);

int main ()
{

    int x = 13;
    int y = 9;
    int sum;
    int* result = mult(&x, &y, &sum);
    printf("%i", *result);

}

int* mult(int* x, int* y, int* sum)
{
    *sum = *x * *y;
    return sum;  
}