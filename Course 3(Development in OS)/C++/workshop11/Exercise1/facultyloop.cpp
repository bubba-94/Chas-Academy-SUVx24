#include <iostream>

int faculty (int number);

int main(){

    int n{1};
    std::cout << faculty(n);

}

int faculty(int n) {

    // unititialized total would mean total = 0
    // each loop would result in = 0 * n (UB) 
    int total{1};
    if (n <= 1){
        return 1;
    }
    for (int i = 1; n > i; n--){
        total *= n;
    }
    return total;
}