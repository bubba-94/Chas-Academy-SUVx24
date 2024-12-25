#ifndef ARRAY_H
#define ARRAY_H

#include <array>
#include <iostream>

class DynamicArray{
private:
    int *arrptr;
    int size;
public:
    DynamicArray(int s);
    ~DynamicArray();
    void set_values();
    void display_values();
};
#endif