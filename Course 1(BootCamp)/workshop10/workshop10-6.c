#include <stdio.h>

float average3(int values[], float n);

int main()
{
    int n = 0;
    printf("How many numbers do you want to save?");
    scanf("%i", &n);
    int values[n];
        for (int i = 0; i < n;i++)
        {
            printf("Type number %i: \n", i+1);
            scanf("%i", &values[i]);
        }
    printf("Average is: %.5f", average3(values,n));
}

float average3(int values[], float n)
{   
    float average = 0.0;
    for (int i = 0; i < n; i++)
    {
        average+=values[i];
    }
    return average / n;
}