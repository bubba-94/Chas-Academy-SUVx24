#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <iostream>
#include <string>

class Truck : public Vehicle
{
public:
    Truck(const std::string model, double capacity);
    double calculateDeliveryTime(double distance);
};

#endif