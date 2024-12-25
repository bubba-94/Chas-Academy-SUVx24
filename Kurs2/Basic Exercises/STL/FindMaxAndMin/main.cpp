#include <vector>
#include <iostream>

int main (){
    std::vector <int> numvec;

    numvec.push_back(123);
    numvec.push_back(345);
    numvec.push_back(5665);
    numvec.push_back(345);
    numvec.push_back(876);
    numvec.push_back(6);
    numvec.push_back(1);
    numvec.push_back(123);
    numvec.push_back(1532);
    numvec.push_back(56);
    
    int max  = numvec.back();
    int min = numvec.front();
    for(int i = 0; i < numvec.size(); i++){
        // Assigns max to the back and min to the front
        if (numvec[i] > max){
            max = numvec[i];
        }
        if (numvec[i] < min){
            min = numvec[i];
        }
    }
    // Vector still not sorted so i use cout with new vars.
    std::cout << "\nLowest element: " << min;
    std::cout << "\nHighest element: " << max;

}