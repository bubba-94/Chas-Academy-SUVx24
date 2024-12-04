#include "Truck.h"

#include <iostream>
#include <string>

Truck::Truck(const std::string model, double capacity) : 
    Vehicle (model, capacity){}

double Truck::calculateDeliveryTime(double distance)
{
    return distance / 50.0;
}