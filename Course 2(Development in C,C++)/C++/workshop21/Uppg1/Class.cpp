#include "Class.h"

Person::Person (std::string name, int birthyear) : name(name), birthyear(birthyear)
{
    std::cout << "\n" << name << " created";
}

Person::~Person()
{
    std::cout << "\n" << name << " object destroyed";
} 

void Person::list_all_persons()
{
    std::cout << "\nName: " << name << "\nBirthyear: " << birthyear; 
}