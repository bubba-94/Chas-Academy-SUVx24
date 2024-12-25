#include "Array.h"

DynamicArray::DynamicArray(int s) : size(s){
    arrptr = new int [size];
    for (int i = 0; i < size; i ++){
        arrptr[i] = 0;
    }
}

DynamicArray::~DynamicArray(){
    delete[] arrptr;
    arrptr = nullptr;
    size = 0;
    std::cout << "\nMemory gone.";
}

void DynamicArray::set_values(){
    std::cout << "Set size of array: ";
    std::cin >> size;
    std::cin.ignore();

    for (int i = 0; i < size; i++){
        std::cout << "\nIndex [" << i+1 << "]:";
        std::cin >> arrptr[i];
    }

}
void DynamicArray::display_values(){
    std::cout << "\n--------------";
    for (int i = 0; i < size; i ++){
        std::cout << "\nIndex [" << i+1 << "]:" << arrptr[i];
    }
}