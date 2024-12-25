#include "nlohmann/json.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using json = nlohmann::json;

struct Information
{
    std::string first_name;
    std::string last_name;
    int birth_year;
    std::string email;
    std::string phone;
};

void addNewContact(json &data, std::map<int, Information> &map);
void outFile(json &updatedInfo);
void saveNewTable(json &updatedInfo, std::map <int, Information> &map);
void listMainMenu(json &data, json &updatedInfo, std::map <int, Information> &map);
void listFullTable(std::map<int, Information> &map);

int main() 
{
    std::ifstream contactDataInFile ("C:\\Chas\\SUVx24\\Kurs2\\workshop16\\ContactDB\\ContactDB.json"); 
    if (!contactDataInFile)
    {
        std::cerr << "Error opening file.\n";
        return 1;
    }
    // Map that uses and int as KEY and struct Information as VALUES (string first_name, string last_name, int birth_year, string email, string phone).
    std::map<int, Information> contactInfoMap;

    // Two json objects
    json ContactData;
    json UpdatedContactData;
    contactDataInFile >> ContactData;

    for (const auto& row : ContactData)
    {
        if(row.contains("id") && row.contains("person")) 
        {
            contactInfoMap[row["id"].get<int>()] =
            { 
                row["person"]["first_name"].get<std::string>(),
                row["person"]["last_name"].get<std::string>(),
                row["person"]["birth_year"].get<int>(),
                row["person"]["email"].get<std::string>(),
                row["person"]["phone"].get<std::string>()
            };
        }
    }

    listMainMenu(UpdatedContactData, ContactData, contactInfoMap);

}
void listMainMenu(json &data, json &updatedInfo, std::map <int, Information> &map)
{
    int select;
    while(select != 5)
    {
    std::cout << "\n1) Add a new contact"
              << "\n2) Edit existing info"
              << "\n3) Remove one full contact"
              << "\n4) List full database"
              << "\n5) Save and exit"
              << "\nEnter: ";
    std::cin >> select;

        switch(select)
        {
            case 1: // Add a new contact
                addNewContact(data, map);
            break;
            case 2: // Edit existing info
            break;
            case 3: // Remove full contact info
            break;
            case 4: // List full database
                listFullTable(map);
            break;
            case 5: // Save and exit 
                saveNewTable(data, map);
                outFile(updatedInfo);
            break;
            default:
                std::cout << "Error, choose between the following 1-5\n";
            break;
        }
    }
}
void listFullTable (std::map<int, Information> &map)
{
    std::cout << "Hello from listFullTable()\n";
    for (const auto& [id, info] : map)
    {
    std::cout << "\n---------";
    std::cout << "\nID: " << id
            << "\nFirst name: " << info.first_name
            << "\nLast name: " << info.last_name
            << "\nBorn: " << info.birth_year
            << "\nEmail: " << info.email
            << "\nPhone: " << info.phone
            << "\n";
    }
}
void saveNewTable (json &updatedInfo, std::map <int, Information> &map) 
{
std::cout << "Hello from saveNewTable()\n";
    for (const auto& [id, info] : map)
    {
        updatedInfo[std::to_string(id)]= 
        {
            {"first_name", info.first_name},
            {"last_name", info.last_name},
            {"birth_year", info.birth_year},
            {"email", info.email},
            {"phone", info.phone}
        };
    }
}
void outFile(json &updatedInfo)
{
    std::ofstream contactDataOutFile ("ContactDB.json");
    if (contactDataOutFile)
    {
        contactDataOutFile << updatedInfo.dump(4);
        std::cout << "Data saved to: ContactDB.json\n";
    }
    else 
    {
        std::cerr << "Error opening file for writing \n";
    }
}
void addNewContact(json &data, std::map<int, Information> &map)
{
    Information info;
    int newId{0};

    if (!map.empty()) {
        newId = map.rbegin()->first + 1;
    }

    std::cout << "\n---Add new contact---";
    std::cout << "\nFirst name: ";
    std::getline(std::cin, info.first_name);
    std::cout << "\nLast name: ";
    std::getline(std::cin, info.last_name);
    std::cout << "\nBirthyear: ";
    std::cin.ignore();
    std::cin >> info.birth_year;
    std::cout << "\nEmail: ";
    std::getline(std::cin, info.email);
    std::cout << "\nPhone : ";
    std::getline(std::cin, info.phone);

    map.emplace(newId, info);

    json newContact;

    data.push_back(newContact);
}