#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <condition_variable>

int counter = 0; // Shared resource
bool ready = true;

void incrementCounter(std::condition_variable &cv, std::mutex &mtx) {
    for (int i = 0; i < 1000; ++i) {
        std::unique_lock cvlock(mtx);
            // counter
        while (!ready){
            cv.wait(cvlock);
        }

        ready = false;
        int temp = counter; // Read shared resource
        counter = temp + 1; // Write to shared resource

        std::cout << "\nThread: "<< std::this_thread::get_id() << "\tcounter: " << counter;
        ready = true;
        cv.notify_one();
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
}

int main() {
    std::vector<std::thread> threads;
    std::mutex lock;
    std::condition_variable cv;

    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(incrementCounter, std::ref(cv), std::ref(lock));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << "\nFinal counter value: " << counter << std::endl;
    return 0;
}
