#include <stdio.h>
#include <math.h>

int cubeVolume(int x);


int main ()
{
    int x;
    printf("What is the length of one side of the cube? (integer): ");
    scanf("\n%i",&x);
    printf("The volume is: %i", cubeVolume(x));
}

int cubeVolume(int x)
{
    return x*x*x;
}
