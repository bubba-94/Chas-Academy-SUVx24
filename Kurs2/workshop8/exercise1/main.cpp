#include "Truck.h"
#include "Van.h"

#include <iostream>
#include <string>

int main()
{
   Truck truck1("Heavy Duty 9000", 15.0);
   truck1.printInfo();
   std::cout << "Time: " << truck1.calculateDeliveryTime(300);
   std::cout << "\n";
   Van van1("Quick Transport", 3.0);
   van1.printInfo();
   std::cout << "Time: " << van1.calculateDeliveryTime(300) << std::endl; 

   truck1.calculate(1000);
   std::cout << std::endl;
   van1.calculate(500);
}