#include <cstdlib> //rand
#include <chrono>
#include <iostream>
#include <vector>
    const int n = 4000;

    std::vector<std::vector<int>> A;
    std::vector<std::vector<int>> B;
    std::vector<std::vector<int>> C;

void initializeArray(std::vector<int>& arr, int count) {

    std::srand(std::time(nullptr));
    for (int i = 0; i < count; ++i) {

        arr.push_back(std::rand() % 10000); // Random values between 0 and 9999

    }

}
void additionCalculate() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {

            C[i][j] = A[i][j] + B[i][j];

        }
    }
}
int main()
{
    // Initialise with "random" values
    for (int i = 0; i < n; ++i) {
        A.push_back(std::vector<int>());
        initializeArray(A[i], n);
        B.push_back(std::vector<int>());
        initializeArray(B[i], n);
        C.push_back(std::vector<int>());
        initializeArray(C[i], n);
    }
    additionCalculate();
    return 0;
}
