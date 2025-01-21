#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle
{
protected:
    std::string m_model;
    double m_capacity;
public:
    Vehicle(const std::string model, double capacity);
    void printInfo();
    void calculate(int weight);
};

#endif