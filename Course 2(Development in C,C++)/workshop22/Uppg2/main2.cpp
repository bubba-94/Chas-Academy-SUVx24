#include <array>
#include <iostream>

struct Patient{

    int ptnmr;
    int age;
    std::string name;
};

void save_info(Patient *patients);
void print_info(Patient *ptr, int amount);

int main (){

    int amount{};
    std::cout << "\nHow many patients do you want to sign up: ";

    // Initialize before declaring array to prevent UB
    std::cin >> amount;
    std::cin.ignore();

    Patient *patients = new Patient[amount];
    


    // Write to the array [amount] times
    for (int i = 0; i < amount; i ++){
        save_info(&patients[i]);
    }
        // prints the full array.
    print_info(patients, amount);
    
    // DELETEEEE!!!
    delete[] patients;

}

void save_info(Patient *ptr){
    Patient temp;

    
    std::cout << "\nID: ";
    std::cin >> temp.ptnmr;
    std::cout << "Age: ";
    std::cin >> temp.age;
    std::cin.ignore();
    std::cout << "Name: ";
    std::getline(std::cin, temp.name);

    *ptr = temp;
    std::cout << "ID: " << temp.ptnmr << " saved.\n";
}
void print_info(Patient *ptr, int amount){

    std::cout << "\n-----------\n";
    for (int i = 0; i < amount; i ++){
        std::cout << "\nPatient: " << ptr[i].ptnmr
                  << "\nName: " << ptr[i].name
                  << "\nAge: " << ptr[i].age;
        std::cout << "\n----------";
    }
    std::cout << std::endl;
}