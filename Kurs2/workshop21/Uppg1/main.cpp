#include "Class.h"
#include <iostream>
#include <memory>
#include <vector>

int main ()
{
    // Antal personer
    size_t numPersons;
    std::cout << "Hur många personer vill du lägga till? ";
    std::cin >> numPersons;

    // Skapa en dynamisk array av smarta pekare till Person-objekt
    std::vector<std::shared_ptr<Person>> persons;

    for (size_t i = 0; i < numPersons; ++i) {
        std::string name;
        int birthYear;

        std::cout << "Name: " << i + 1;
        std::cin.ignore(); // Ta bort eventuellt kvarvarande radbrytning
        std::getline(std::cin, name);

        std::cout << "Birthyear: " << i + 1;
        std::cin >> birthYear;

        // Skapa en Person och lägg till i vektorn
        persons.push_back(std::make_shared<Person>(name, birthYear));
    }

    // Avslutande utskrift
    std::cout << "\nList of all persons: \n";
    for (const auto& person : persons) {
        person->listAllPersons();
    }

    // Alla personer frigörs automatiskt här tack vare smarta pekare
    return 0;

}