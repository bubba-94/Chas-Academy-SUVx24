#ifndef RECTANGLECLASS_H
#define RECTANGLECLASS_H
#include <iostream>


class Rectangle{
private:
    double x;
    double y;
public:
    Rectangle();
    void set_measurements(double x, double y);
    double get_measurements();
    double area(double x, double y);
    double perimeter(double x, double y);
    void print_info();
};


#endif