#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <atomic>

int counter = 0; // Shared resource

void increment(int index, std::mutex &printmtx) {

    for (int i = 0; i < 10; ++i) {

        std::lock_guard<std::mutex> lock(printmtx);
        std::cout << "\nThread: "<< std::this_thread::get_id() << "\tcounter: " << counter;
        counter++;
    }
}

void incrementCounter(std::vector<std::mutex> &mtxs, int index, std::mutex &printmtx) {

    for (int i = 0; i < 10; ++i) {
        std::this_thread::yield(); // Simulate context switch
        {   
            // each thread acquires one lock
            std::lock_guard<std::mutex> lock(mtxs[index]);

                // lock for printing only
                printmtx.lock();
                std::cout << "\nThread: "<< std::this_thread::get_id() << "\tcounter: " << counter;
                printmtx.unlock();
            counter++; // Write to shared resource
        }
    }
}
int main() {        
    std::vector<std::thread> new_threads;
    std::vector<std::thread> threads;
    std::vector<std::mutex> mtxs(10);
    std::mutex printmtx;

    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(incrementCounter, std::ref(mtxs), i, std::ref(printmtx));
    }

    for (auto& thread : threads) {
        thread.join();
    }

        std::cout << "\nFinal counter value: " << counter;

    for (int i = 0; i < 10; ++i) {
        new_threads.emplace_back(increment, i, std::ref(printmtx));
    }
    for (auto& thread : new_threads) {
        thread.join();
    }
        std::cout << "\nFinal counter value: " << counter;
    return 0;
}
