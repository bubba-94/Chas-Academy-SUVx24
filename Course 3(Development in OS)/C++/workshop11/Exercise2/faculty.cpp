#include <iostream>

int faculty (int number);

int main(){

    int n{0};
    std::cout << faculty(n);

}

int faculty(int n) {
    // If n <= 1 return 1; to  prevent program crash
    // Without base case the function would keep calling itself
    // with decreasing values and would eventually crash.
    if (n <= 1){
        return 1;
    }
    return faculty(n - 1) * n;
}