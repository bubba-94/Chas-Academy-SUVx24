#include <stdlib.h>
#include <stdio.h>

int main(){
    int syscall = system("echo Hello World");

    if (syscall != 0){
        printf("Not terminated");
    }
    else {
        printf("Terminated");
    }
}