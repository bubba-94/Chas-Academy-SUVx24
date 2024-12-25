#include "class.h"
#include <iostream>

int main (){

    Person johan("Johan", 12);
    Person rebecca;
    rebecca.set_name("Rebecca");
    rebecca.set_age(30);

    std::cout << johan.get_name()<< " " << johan.get_age() << std::endl;
    std::cout << rebecca.get_name()<< " " << rebecca.get_age();

}