#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <atomic>

std::atomic<int> counter = 0; // Shared resource

void incrementCounter() {
    for (int i = 0; i < 1000; ++i) {
        std::this_thread::yield(); // Simulate context switch
        counter++; // Write to shared resource
    }
}
int main() {
    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(incrementCounter);
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << "Final counter value: " << counter << std::endl;
    return 0;
}