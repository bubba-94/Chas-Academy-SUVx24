#include <iostream>
#include <memory>
#include <array>
#include <cstdlib>

struct Patient{
    std::string name;
    int age; 
};

void save_info(Patient *ptr);
void print_info(Patient const *ptr, int amount);

int main(){
std::system("cls");

int amount{};
std::cout << "Amount of patients: ";
std::cin >> amount;
std::cin.ignore();

    // Unique ptr for patients[] of (amount)
std::unique_ptr<Patient[]> patients = std::make_unique<Patient[]>(amount);

    for (int i = 0; i < amount; i++)
    {
        save_info(&patients[i]);
    }
    // patients.get() "same" as std::shared_ptr<Patient[]> *ptr;
    print_info(patients.get(), amount);
}

void save_info(Patient *ptr){
    Patient temp;

    std::cout << "\nName: ";
    std::getline(std::cin, temp.name);
    std::cout << "Age: ";
    std::cin >> temp.age;
    std::cin.ignore();
    *ptr = temp;

    std::cout << temp.name << " saved.\n";
}
// Patient *ptr ??
void print_info(Patient const *ptr, int amount){

    for (int i = 0; i < amount; i ++){
        std::cout << "\nName: " << ptr[i].name
                  << "\nAge: " << ptr[i].age;
        std::cout << "\n----------";
    }
    std::cout << std::endl;
}