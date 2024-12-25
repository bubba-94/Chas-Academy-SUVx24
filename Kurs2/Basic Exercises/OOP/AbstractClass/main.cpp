#include "Class.h"

int main (){

    // Constructor with string arg
    Car audi("Audi A4");
    Bike mtb("Mountain bike");
    Car volvo("Volvo v90");
    Bike bmx("BMX");

    // Using the same virtual function overriden
    audi.display_info();
    mtb.display_info();
    volvo.display_info();
    bmx.display_info();
}