#include <cstdlib>
#include <iostream>

int main(){
    std::string str;
    std::cout << "Compiling: ";
    char filename[100];
    std::cin.getline(filename, 100);
    
    
    str = "gcc ";
    str = str + " -o main.exe " + filename;

    const char* command = str.c_str();

    std::cout << "\nCompliling file using: " << command << std::endl;
    system(command);

    std::cout << "\nRunning file: ";
    system("a.exe");

}