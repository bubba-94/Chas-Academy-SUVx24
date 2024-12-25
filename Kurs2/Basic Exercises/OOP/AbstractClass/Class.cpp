#include "Class.h"

// Destructor for all derived classes
Vehicle::~Vehicle(){}

// Default constructors INITIALIZE!!!!!!!!!!
Car::Car(std::string model): model{model}{}
Bike::Bike(std::string type): type{type}{}


void Car::display_info(){
    std::cout << "\nCar model: " << model;
}

void Bike::display_info(){
    std::cout << "\nType of bike: " << type;
}