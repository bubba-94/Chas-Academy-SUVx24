#ifndef VAN_H
#define VAN_H

#include "Vehicle.h"
#include <iostream>
#include <string>

class Van : public Vehicle
{
public:
    Van(const std::string model, double capacity);
    double calculateDeliveryTime(double distance);
};

#endif