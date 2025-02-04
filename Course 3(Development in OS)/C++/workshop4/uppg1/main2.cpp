#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
std::mutex resource1;
std::mutex resource2;
std::mutex resource3;
void taskA() {
    std::scoped_lock lock(resource1, resource2);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Task A completed, unlock resource1 and 2." << std::endl;
}

void taskB() {
    std::scoped_lock lock(resource2, resource3);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Task B completed, unlock resource2 and 3." << std::endl;
}

void taskC() {
    std::scoped_lock lock(resource3, resource1);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Task C completed, unlock resource3 and 1." << std::endl;
}

int main() {
    std::thread tA(taskA);
    std::cout << "Task A started, acquire resource1 and 2." << std::endl;
    std::thread tB(taskB);
    std::cout << "Task B started, acquire resource2 and 3." << std::endl;
    std::thread tC(taskC);
    std::cout << "Task C started, acquire resource3 and 1." << std::endl;
    tA.join();
    tB.join();
    tC.join();
return 0;
}