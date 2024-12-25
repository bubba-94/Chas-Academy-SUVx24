#include <array>
#include <iostream>

int main(){
// 3x3 Matrix (2D Array)
std::array <int[3],3> numarr; 


// Assign values to each element starting at [0][0]
// 3 indexes for each row. 
for (int i = 0; i < 3; i ++){
    for (int j = 0; j < 3; j++){
        std::cout << "\nIndex [" << i << "][" << j << "]: ";
        std::cin >> numarr[i][j]; 
    }
}

// Access every row first, and then every index at each row. 
for (auto &row: numarr){
    for (int num : row){
        std::cout << num << " ";
    }
    std::cout << "\n";
}
return 0;    
}