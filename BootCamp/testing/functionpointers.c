#include <stdio.h>

int* addNumber(int* num1, int* num2, int* sum)
{
    *sum = *num1 + *num2;
    return sum;
}
int main ()
{
    int number1 = 32;
    int number2 = 18;
    int sum;

    int* result = addNumber(&number1, &number2, &sum);
    printf("Sum is: %i", *result);
}