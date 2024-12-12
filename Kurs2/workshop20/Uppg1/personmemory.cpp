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

    std::cout << "\nHow many persons?\n";
    std::cout << "Enter: "; 
    std::cin >> size;
    std::cin.ignore();
    Person* personptr = new Person[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Person [" << i + 1 << "]";
        std::cout << "\nName: ";
        std::getline(std::cin, personptr[i].name);
        std::cout << "Birthyear: ";
        std::cin >> personptr[i].birthyear; 
        std::cin.ignore();
    }

    std::cout << "\nA full list of all persons\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << "-------------------\n";
        std::cout << "Person [" << i + 1 << "]\n";
        std::cout << "Name: " << personptr[i].name << "\n";
        std::cout << "Birthyear: " << personptr[i].birthyear << "\n";
    }
    
    delete []personptr;
}