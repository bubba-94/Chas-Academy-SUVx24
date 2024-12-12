#include "Class.h"

Person::Person (std::string name, int birthyear) : name(name), birthyear(birthyear)
{
    std::cout << name << "created\n";
}

Person::~Person()
{
    std::cout << name << "object destroyed\n";
} 

void Person::listAllPersons()
{
    std::cout << "\nName: " << name << "\nBirthyear: " << birthyear; 
}