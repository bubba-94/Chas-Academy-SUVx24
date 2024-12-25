#include "Box.h"

int main (){

    srand(time(NULL));
    int random_num = rand() % 20 + 1;

    int first{}, second{}, third{};

    std::cout << "\nMeasurements 1: ";
    std::cin >> first;
    std::cout << "\nMeasurements 2: ";
    std::cin >> second;
    std::cout << "\nMeasurements 3: ";
    std::cin >> third;
    std::cin.ignore();

    // Default constructor with values set to 1
    Box one;
    std::cout << "\nVolume of default Box() constructor = " << one.calculate_volume();
    
    // Constructor with two arguments
    Box two(first, second);
    std::cout << "\nVolume of Box(x, x, 1) constructor = " << two.calculate_volume();

    // Constructor with three arguments
    Box three(first, second, third);
    std::cout << "\nVolume of Box (x, x, x) constructor = " << three.calculate_volume(); 
}
