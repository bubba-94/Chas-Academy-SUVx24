#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to perform bubble sort
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {

        for (int j = 0; j < n - 1 - i; ++j) {

            if (arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);

                }
            }
        }
}

// Function to initialize the array with n random values
void initializeArray(std::vector<int>& arr, int n) {
    // Seed the random number generator
    std::srand(std::time(nullptr));
    for (int i = 0; i < n; ++i) {
            arr.push_back(std::rand() % 10000); // Random values between 0 and 9999
        }
}
// Function to print the array
void printArray(const std::vector<int>& arr, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << arr.at(i) << " ";
    }
    std::cout << "\n";
}
int main() {
    // Create an array for sorting
    std::vector<int> arr;

    // Initialize the array with random values
    initializeArray(arr, 10000);

    // Print the original array
    std::cout << "Original array: ";
    printArray(arr, 10);

    // Sort the array using bubble sort
    bubbleSort(arr);

    // Print the sorted array
    std::cout << "Sorted array: ";
    printArray(arr, 10);
    return 0;
}