#include "Geometry.h"

Rectangle::Rectangle(int length, int width) : length{length}, width{width}{}
Circle::Circle(int radius) : radius{radius}{}


Geometry::~Geometry(){
    std::cout << "\nMemories gone";
}

double Circle::area(){
    double total = radius * radius * 3.14;
    std::cout << "\nRadius: " << radius
              << " meters = Area: " << total;
return total;
}

double Rectangle::area(){
    double total = length * width;
    std::cout << "\nLength: " << length
              << ", Width: " << width
              << " = Area: " << total;
    return total;
}