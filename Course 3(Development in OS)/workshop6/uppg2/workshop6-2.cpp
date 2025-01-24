/**
 * @file workshop6-2.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-01-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <fstream>
#include <string>
#include <iostream>

/**
 * @brief a function for adding two params
 * 
 * @param a first int param
 * @param b seconds int param
 * @return sum of a + b
 */
int add(int a, int b) {
return a + b;
}

/**
 * @brief a function for subracting two params
 * 
 * @param a first int param
 * @param b seconds int param
 * @return sum of a - b 
 */
int subtract(int a, int b) {
return a - b;
}

/**
 * @brief 
 * 
 * @param filename name of file to write
 * @param text const string written to filename
 */
void writeToFile(const std::string& filename, const std::string& text) {

    std::ofstream file(filename);
        if (file.is_open()) {
            file << text;
            file.close();
        } else {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
    }
}

/**
 * @brief function to read from certain &filename
 * 
 * @param filename filename supposed to read from 
 * @return content of said read file
 */
std::string readFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string content;

    if (file.is_open()) {

        std::getline(file, content);
        file.close();
    } else {
        std::cerr << "Error opening file for reading: " << filename << std::endl;
    }
    return content;
}

int main() {
    int x = 8, y = 3;
    std::cout << "Addition: " << add(x, y) << std::endl;
    std::cout << "Subtraction: " << subtract(x, y) << std::endl;

    std::string filename = "output.txt";
    writeToFile(filename, "Hello, single-file documentation!");

    std::cout << "File content: " << readFromFile(filename) << std::endl;

    return 0;
}
