#include <array>
#include <iostream>

int main (){
    int rows{}, columns{};

    std::cout << "\nRows: ";
    std::cin >> rows;
    std::cout << "\nColumns: " ;
    std::cin >> columns;

    int square[rows][columns];
    if (rows == columns){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                std::cout << "#";
            }
            std::cout << std::endl;
        }
    } 
    else{
        std::cout << "Input does not equal a sqaure";
    }
}