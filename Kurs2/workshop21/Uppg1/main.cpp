#include "Class.h"
#include <iostream>
#include <memory>
#include <vector>

int main ()
{
    
    size_t num_persons;
    std::cout << "How many persons would you like to add? ";
    std::cin >> num_persons;

    // Skapa en dynamisk array av smarta pekare till Person-objekt
    std::vector<std::shared_ptr<Person>> persons;

    for (size_t i = 0; i < num_persons; ++i) {
        std::string name;
        int birth_year;

        std::cout << "Name " << i + 1 << ": ";
        std::cin.ignore(); // Ta bort eventuellt kvarvarande radbrytning
        std::getline(std::cin, name);

        std::cout << "Birthyear " << i + 1 << ": ";
        std::cin >> birth_year;

        persons.push_back(std::make_shared<Person>(name, birth_year));
    }

    // Print all
    std::cout << "\nList of all persons: ";
    for (const auto& person : persons) {
        person->list_all_persons();
    }

    // Alla personer frigörs automatiskt här tack vare smarta pekare
    return 0;

}