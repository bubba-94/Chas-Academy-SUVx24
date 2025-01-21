#include <iostream>
/*
    • Skapa ett program för en vårdklinik där varje patient har ett unikt journalnummer
    och en ålder. Använd struct för en patient.
    • Använd dynamisk minnesallokering för att skapa en array av patienter.
    • Programmet ska:
    o Låta användaren ange antalet patienter.
    o Allokera dynamiskt minne för att lagra journalnummer och ålder för varje
    patient.
    o Låta användaren mata in uppgifter för varje patient.
    o Skriva ut alla patientuppgifter.
    Följande är förslag på möjlig output:
    Refaktorering:
    Byt ut användningen av en struct för Patient mot användning av en klass i stället.
*/

struct Patient{
    int ptnmr;
    int age;
    std::string name;
};

Patient saveInfo(Patient *ptr);
void printInfo(Patient *ptr, int amount);

int main(){

    int amount{};
    std::cout << "\nHow many patients do you want to sign in? "; 
    std::cin >> amount;
    // Array of ptrs to a [amount] new Patients
    Patient *patients = new Patient [amount];
    
    for (int i = 0; i < amount; i ++)
    {
        // Send reference of &patients at [i] location.
        saveInfo(&patients[i]);
    }
    printInfo(patients, amount);
    // DELETE!!!
    delete[] patients;

}

Patient saveInfo(Patient *ptr){
    Patient temp;

    std::cout << "\nJournal ID: ";
    std::cin >> temp.ptnmr;
    std::cin.ignore();
    std::cout << "\nAge: ";
    std::cin >> temp.age;
    std::cin.ignore();
    std::cout << "\nName: ";
    std::getline(std::cin, temp.name);

    // Assign ptr to temp object
    *ptr = temp;

    return temp;
}
void printInfo(Patient *ptr, int amount){
    for (int i = 0; i < amount; i++)
    {
        // Print the [i]th values.
        std::cout << "\nPatient [" << ptr[i].ptnmr << "]";
        std::cout << "\nAge: " << ptr[i].age;
        std::cout << "\nName: " << ptr[i].name;
    }
}