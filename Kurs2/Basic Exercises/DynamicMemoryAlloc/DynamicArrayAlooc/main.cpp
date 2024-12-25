#include <memory>
#include <iostream>
#include <array>

int main (){

    int size{};
    std::cout << "Size: ";
    std::cin >> size;

    int *numarr = new int [size];

    for(int i = 0; i < size; i ++){
        std::cout << "\nEnter value: ";
        std::cin >> numarr[i];
    }
    for(int i = 0; i < size; i ++){
        std::cout << numarr[i] << std::endl;;
    }

    delete[] numarr;
}