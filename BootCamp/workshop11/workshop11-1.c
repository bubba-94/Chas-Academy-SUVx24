#include <stdio.h>

int main ()
{
    int* heltalptr;    
    float* flytptr;
    double* decimalptr;
    char* charPtr;

    int size = sizeof(heltalptr);
    printf("\n%i", size);
    printf("\n%p", size);

    size = sizeof(flytptr);
    printf("\n%i", size);
    printf("\n%p", size);

    size = sizeof(decimalptr);
    printf("\n%i", size);
    printf("\n%p", size);
    
    size = sizeof(charPtr);
    printf("\n%i", size);
    printf("\n%p", size);


}