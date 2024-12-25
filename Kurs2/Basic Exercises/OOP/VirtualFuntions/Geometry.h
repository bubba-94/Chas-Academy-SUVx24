#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <iostream>

class Geometry{
public:
virtual ~Geometry();
virtual double area() = 0;
};

class Circle : public Geometry {
private:
    int radius;
public:
    Circle(int radius);
    double area() override;
};

class Rectangle : public Geometry{
private:
    int length;
    int width;
public:
    Rectangle(int length, int width);
    double area() override;
};

#endif