#include <chrono>
#include <vector>
#include <iostream>
#include <random>

int main(){

    std::mt19937 mt(42);  // Seed with 42
    std::uniform_int_distribution<int> dist(1, 100);

    int n{};

    std::cout << "\nArray size: ";
    std::cin >> n;
    std::cin.ignore();
   
    std::vector<std::vector<int>> a(n, std::vector<int>(n));
    std::vector<std::vector<int>> b(n, std::vector<int>(n));
    std::vector<std::vector<int>> c(n, std::vector<int>(n));

        for (int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = dist(mt);
                b[i][j] = dist(mt);
            }
        }

    std::cout << "\nLoop unrolling: ";
    const auto start{std::chrono::steady_clock::now()};
        
        // Loop 4 elemtents each loop
        for (int i = 0; i < n; ++i) {
            int j = 0;
            for (; j <= n - 4; j += 4) { // Unrolling by 4
                c[i][j]     = a[i][j]     + b[i][j];
                c[i][j + 1] = a[i][j + 1] + b[i][j + 1];
                c[i][j + 2] = a[i][j + 2] + b[i][j + 2];
                c[i][j + 3] = a[i][j + 3] + b[i][j + 3];
            }

            for (; j < n; ++j) {
            c[i][j] = a[i][j] + b[i][j];
            }
        }
        
    const auto end{std::chrono::steady_clock::now()};
    const std::chrono::duration<double> elapsed_seconds{end - start};
    std::cout << "\nElapsed time: " << elapsed_seconds.count();

}