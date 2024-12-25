#include <memory>
#include <iostream>

int main(){

    int *ptr = new int;

    *ptr = 5;

    std::cout << *ptr;

    delete ptr;
}