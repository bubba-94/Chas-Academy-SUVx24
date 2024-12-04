#include <stdio.h>

int main ()

{
    int firstNum, secondNum, plus, minus, multiplikation, division;
    printf("Enter two numbers: ");
    scanf("%d %d", &firstNum, &secondNum);
    plus = firstNum + secondNum;
    minus = firstNum - secondNum;
    multiplikation = firstNum * secondNum;
    division = firstNum / secondNum;

    printf("Addition: %d", plus);
    printf("\nSubtraction: %d", minus);
    printf("\nMultiplication: %d", multiplikation);
    printf("\nDivision: %d", division);
}