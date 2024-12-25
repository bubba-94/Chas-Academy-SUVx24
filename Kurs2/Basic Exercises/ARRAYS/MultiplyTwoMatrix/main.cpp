#include <array>
#include <iostream>

int main (){

    const int ROWS{3};
    const int COLUMNS{3};

    std::array <std::array<int,COLUMNS>, ROWS> matrix1;
    std::array <std::array<int,COLUMNS>, ROWS> matrix2;
    std::array <std::array<int,COLUMNS>, ROWS> matrixsum;

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLUMNS; j++){
            std::cout << "\nIndex [" << i << "][" << j << "]: ";
            std::cin >> matrix1[i][j];
            std::cin.ignore();
        }
    }
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLUMNS; j++){
            std::cout << "\nIndex [" << i << "][" << j << "]: ";
            std::cin >> matrix2[i][j]; 
            std::cin.ignore();
        }
    }

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; i < COLUMNS; j++){
            matrixsum[i][j] = 0;
            for(int k = 0; k < COLUMNS; k++){
                matrixsum[i][j] = matrix1[i][k] * matrix2[k][j];
                std::cout << "Sum of matrixsum[" << i << "][" << j << "]: " << matrixsum[i][j];
            }
            std::cout << "\n";
        }
    }
}