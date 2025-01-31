#include <iostream>
#include <thread>
#include <mutex>
std::mutex mutex1;
std::mutex mutex2;

void task1() {
    std::lock_guard<std::mutex> lock1(mutex1);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock2(mutex2);
    std::cout << "Task 1 completed." << std::endl;
}

// Previously switch lines 16 and 18
 
void task2() {
    std::lock_guard<std::mutex> lock1(mutex1);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock2(mutex2);
    std::cout << "Task 2 completed." << std::endl;
}

int main() {
    std::thread t1(task1);
    std::cout << "Task 1 started." << std::endl;
    std::thread t2(task2);
    std::cout << "Task 2 started." << std::endl;
    t1.join();
    t2.join();
    return 0;
}
