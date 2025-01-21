#include <stdio.h>

int main ()
{
    int tempInput;
    printf("How hot is it outside? (IN C):\n ");
    scanf("%d\n ", &tempInput);
    printf("The temperature from C to F: %d", (tempInput * 9/5 + 32));

}

