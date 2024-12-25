#include "class.h"

int main(){

    // Calling the same funtion but with two different argument types.
    Calc first;
    std::cout << first.add(3,4) << std::endl;
    std::cout << first.add(3.5,4.7) << std::endl;

}