#include "RectangleClass.h"

Rectangle::Rectangle(){}

void Rectangle::set_measurements(double x, double y){
    this-> x = x;
    this-> y = y;
}

double Rectangle::get_measurements(){
    return x,y;
}

double Rectangle::area(double x, double y){
    return x*y;
}

double Rectangle::perimeter(double x, double y){
    return x * 2 + y * 2;
}

void Rectangle::print_info(){
    get_measurements();
    std::cout << "\nArea of " << x << " and "<< y << " = " << area(x,y);
    std::cout << "\nPerimeter of " << x << " and " << y << " = " << perimeter(x,y);
}

