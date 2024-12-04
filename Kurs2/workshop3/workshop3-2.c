#include <stdio.h>

int main ()
{
    FILE *fptr;
    fptr = fopen("my_file2.txt", "w");
    fprintf(fptr, "Hello world, from inside the file");
    fclose(fptr);
}