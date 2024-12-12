#include <iostream>
#include <array>

struct Person 
{
    std::string name;
    int birthyear;
};

int main ()
{
    int size{};

    std::cout << "\nHow many persons?"; 
    std::cin >> size;
    std::cin.ignore();
    Person *personptr = new Person[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Person [" << i + 1 << "]";
        std::cout << "\nName: ";
        std::getline(std::cin, personptr[i].name);
        std::cout << "Birthyear: ";
        std::cin >> personptr[i].birthyear; 
        std::cin.ignore();
    }

    std::cout << "A full list of all persons\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << "-------------------\n";
        std::cout << "Person [" << i + 1 << "]\n";
        std::cout << "Name: " << personptr[i].name << "\n";
        std::cout << "Birthyear: " << personptr[i].birthyear << "\n";
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << "\n----------------";
        std::cout << "\nBirthyear: " << (personptr + 1)->birthyear;
        std::cout << "\nName: " << (personptr + 1)->name;
        std::cout << "\nPerson [" << i + 1 << "]";
    }
    
    delete []personptr;
}