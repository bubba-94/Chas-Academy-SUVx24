#include <thread>
#include <iostream>
#include <mutex>
#include <chrono>
std::mutex mtx3;
std::mutex mtx2;
std::mutex mtx1;
void lock1(){
    std::cout << "\nThread 1 locks lock 1";
    mtx1.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\nThread 1 tries to lock 3";
    mtx3.lock();
    std::cout << "\nThread 1 has locked 3";
    mtx1.unlock();
    mtx3.unlock();
}

void lock2(){
    std::cout << "\nThread 2 locks lock 2";
    mtx2.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\nThread 2 tries to lock 1";
    mtx1.lock();
    std::cout << "\nThread 2 has locked 1";
    mtx2.unlock();
    mtx1.unlock();
}

void lock3(){
    std::cout << "\nThread 3 locks lock 3";
    mtx3.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\nThread 3 tries to lock 2";
    mtx2.lock();
    std::cout << "\nThread 3 has locked 2";
    mtx3.unlock();
    mtx2.unlock();
}

// DEADLOCKED

int main(){

    std::thread race1(lock1);
    std::thread race2(lock2);
    std::thread race3(lock3);

    race1.join();
    race2.join();
    race3.join();


}