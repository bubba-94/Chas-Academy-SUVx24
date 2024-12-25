#include <array>
#include <iostream>

int main(){
// 3x3 Matrix (2D Array)
std::array <int[3],3> numarr; 

// Constants to make it more clear.
const int ROWS = 3;
const int COLUMNS = 3;

// Assign values to each element starting at [0][0]
// 3 indexes for each row. 
for (int i = 0; i < ROWS; i ++){
    for (int j = 0; j < COLUMNS; j++){
        std::cout << "\nIndex [" << i << "][" << j << "]: ";
        std::cin >> numarr[i][j]; 
    }
}

// Assign values to each element starting at [0][0]
// 3 indexes for each row. 
for (int i = 0; i < COLUMNS; i++){
    for (int j = 0; j < ROWS; j++){
        std::cout << numarr[j][i] << " ";
        }
        std::cout << std::endl;
}
}