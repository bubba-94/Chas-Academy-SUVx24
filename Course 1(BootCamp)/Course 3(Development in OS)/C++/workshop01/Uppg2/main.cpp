#include <cstdlib>
#include <iostream>

int main(){

    int syscalls = system("echo Hello World");
    if (syscalls != 0){
        std::cout << "Not terminatedvf";
    }
    else{
        std::cout << "Success!";
    }
    return 0;
}