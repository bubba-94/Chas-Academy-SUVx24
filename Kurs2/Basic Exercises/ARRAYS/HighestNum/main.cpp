#include <array>
#include <iostream>

int main(){
    std::array <int[4],4> numarr;

    // Intialize 4x4 arr.
    for (int i = 0; i < 4; i ++){
        for (int j = 0; j < 4; j++){
            std::cout << "\nIndex [" << i << "][" << j << "]: ";
            std::cin >> numarr[i][j]; 
        }
    }


    int highest_num{};
    // Search through array to find highest num
    for (int i = 0; i < 4; i ++){
        for (int j = 0; j < 4; j++){
            if (numarr[i][j] > highest_num){
                // Sets current index to highest_num if it is higher.
                highest_num = numarr[i][j];
            }   
            
        }
    }
    std::cout << "Highest number = " << highest_num;
}