#ifndef CLASS_H
#define CLASS_H
#include <string>
#include <iostream>

// Pure virtual function.
class Vehicle{
public:
    ~Vehicle();
    virtual void display_info() = 0;
};

class Car: public Vehicle{
private:
    std::string model;
public:
    Car(std::string model);
    virtual void display_info() override;
};

class Bike: public Vehicle{
private:
    std::string type;
public:
    Bike(std::string type);
    virtual void display_info() override;
};

#endif