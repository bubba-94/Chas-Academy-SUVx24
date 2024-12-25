#include <array>
#include <iostream>


int main (){

    // Array of 3x3 
    std::array <int[3], 3> numarr;
    
    // Assign each index
    int sum{};
    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 3; j++){
            std::cout << "\nIndex [" << i << "][" << j << "]: ";
            std::cin >> numarr[i][j]; 
            // Adds each elemnt to sum
            sum += numarr[i][j];
            std::cout << "\nSum right now: " << sum << std::endl; 
        }
    }
    std::cout << "\nSum of each number inside the matrix = " << sum;
}