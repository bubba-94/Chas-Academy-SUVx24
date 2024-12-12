#include <iostream>
#include <memory>
#include <cstdlib>
#include <vector>
#include <iomanip>
/*
Hantera kundkorgar för en matbutik online.
Mål:
• Träna på smarta pekare.
Att göra:
• Utveckla ett program som hanterar delade kundkorgar för en matbutik online.
• Varje kund kan dela en korg med andra kunder (typ familjen).
• Använd shared_ptr för att representera varje korg och lägg till flera kunder som delar
samma korg.
• Programmet ska:
o Skapa en korg och dela den mellan två kunder.
o Visa information om vilka kunder som använder korgen.
Följande är förslag på möjlig output:
*/
struct Basket {
    std::string name;
};

struct Customer{
    std::string name;
    std::shared_ptr<Basket> ptr;
};

int main (){
    // Clears/resets the terminal for readability
    std::system("cls");

    std::shared_ptr<Basket> basket = std::make_shared<Basket>();
    
    // Assign string values to Basket::name
    basket -> name = "Fruit Basket";

    // Customer struct has name and shared_ptr attributes
    Customer cust1 = {"Johan", basket};
    Customer cust2 = {"Rebecca", basket};
    Customer cust3 = {"Sam", basket};

    // Output
    std::cout << cust1.name << " with def: cust1.ptr->name: " << std::setw(20) << "| " << cust1.ptr->name << std::endl;
    std::cout << cust2.name << " with def: cust2.ptr->name: " << std::setw(18) << "| " << cust2.ptr->name << std::endl;
    std::cout << cust3.name << " with def: cust3.ptr->name: " << std::setw(22) << "| " << cust3.ptr->name << std::endl;
    std::cout << "------------------------------------------------------------------\n";
    std::cout << cust1.name << " with def: cust1.ptr: " << std::setw(26) << "| " << cust1.ptr << std::endl;
    std::cout << cust2.name << " with def: cust2.ptr: " << std::setw(24) << "| " << cust2.ptr << std::endl;
    std::cout << cust3.name << " with def: cust3.ptr: " << std::setw(28) << "| " << cust3.ptr << std::endl;
}