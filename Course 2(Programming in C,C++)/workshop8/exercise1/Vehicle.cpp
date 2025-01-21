#include "Vehicle.h"

#include <iostream>
#include <string>

Vehicle::Vehicle(const std::string model, double capacity)
    : m_model(model), m_capacity(capacity){}

void Vehicle::printInfo()
{
    std::cout << "--------------" << std::endl;
    std::cout << "Model: " << m_model << std::endl << "Capacity: " << m_capacity << " tons" << std::endl;
}
void Vehicle::calculate(int weight)
{
    int totalCars = weight / m_capacity;
    std::cout << "To transport " << weight << " tons" << std::endl;
    std::cout << "Each car: " << m_capacity << std::endl;
    std::cout << "For " << weight << " tons, it will require " << totalCars << " cars." << std::endl;
}