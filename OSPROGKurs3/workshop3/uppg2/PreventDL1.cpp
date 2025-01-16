#include <thread>
#include <iostream>
#include <mutex>
#include <chrono>
std::mutex mtx3;
std::mutex mtx2;
std::mutex mtx1;
void lock1(){
    std::cout << "\nThread 1 locks mtx1";
    mtx1.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "\nThread 1 tries to lock mtx3";

    if (mtx3.try_lock()) {
        std::cout << "\nThread 1 has locked mtx3";
        mtx3.unlock();
        std::cout << "\nThread 1 has unlocked mtx3";
        }
        else {
            std::cout << "\nLock not available.";
        }
    std::cout << "\nThread 1 has unlocked mtx1";
    mtx1.unlock();
}

void lock2(){
    std::cout << "\nThread 2 locks mtx2";
    mtx2.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "\nThread 2 tries to lock 1";


    if (mtx1.try_lock()) {
            std::cout << "\nThread 2 has locked mtx1";
            mtx1.unlock();
            std::cout << "\nThread 2 has unlocked mtx1";
        }
        else {
            std::cout << "\nLock not available.";
        }
    std::cout << "\nThread 2 has unlocked lock mtx2";
    mtx2.unlock();
}

void lock3(){
    std::cout << "\nThread 3 locks mtx3";
    mtx3.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "\nThread 3 tries to lock mtx2";

    if (mtx2.try_lock()) {
        std::cout << "\nThread 3 has locked mtx2";
        mtx2.unlock();
        std::cout << "\nThread 3 has unlocked mtx2";
        }
        else {
            std::cout << "\nLock not available.";
        }
    std::cout << "\nThread 3 has unlocked mtx3";
    mtx3.unlock();
}

// Solved??

int main(){

    std::thread race1(lock1);
    std::thread race2(lock2);
    std::thread race3(lock3);

    race1.join();
    race2.join();
    race3.join();


}