#include <map>
#include <iostream>
#include <string>

int main(){

    // Un
    std::map<std::string, int> my_map{{"Johan", 30}, {"Rebecca", 30}, {"Mattias", 37}, {"Patrik", 34}, {"Lisa", 36}};
    
    for (auto [name, age] : my_map){
        std::cout << "\nName: " << name << "\tAge: " << age;
    }
}