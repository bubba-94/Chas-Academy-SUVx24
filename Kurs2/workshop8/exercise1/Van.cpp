#include "Van.h"

#include <string>
#include <iostream>

Van::Van(const std::string model, double capacity) : 
    Vehicle (model, capacity){}


double Van::calculateDeliveryTime(double distance)
{
    return distance / 80.0;
}