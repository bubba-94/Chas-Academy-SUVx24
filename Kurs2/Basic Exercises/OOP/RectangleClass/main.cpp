#include "RectangleClass.h"
#include <iostream>

int main(){

    Rectangle one;
    Rectangle two;
    one.set_measurements(2.0,2.5);
    two.set_measurements(6.0,10.75);

    one.print_info();
    two.print_info();

}