#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int size = 0;                                           // Using the stack
    printf("Enter the size: ");
    scanf("%i", &size);
    // malloc similar too new in c++ (can be used in c++)

    printf("Using malloc() of size %i\n", size);

    int *array = (int*)malloc(size * sizeof(int));                        // Dynamically using the heap

    for(int i = 0; i < size; i++)
    {
        array[i] = i + 1; 
        printf("%i ", array[i]);
    }
    // calloc similar too new in c++ (can be used in c++)

    printf("\nUsing calloc() of size %i\n", size);                              // Using the stack
    int *array2 = (int *)calloc(size, sizeof(int));                        // Dynamically using the heap
    for(int i = 0; i < size; i++)
    {
        array2[i] = i + 1; 
        printf("%i ", array2[i]);
    }
    printf("\n");

    // realloc  

    printf("Using realloc():\n");

    int *array3 = (int*)realloc(array2, (size / 2 ) * sizeof(int));
    printf("Previous address: = %d, new address = %d\n", array2, array3);
    for(int i = 0; i < (size); i++)
    {
        printf("%i ", array3[i]);
    }

    // free similar too delete in c++

    free(array);
    free(array2);
}

