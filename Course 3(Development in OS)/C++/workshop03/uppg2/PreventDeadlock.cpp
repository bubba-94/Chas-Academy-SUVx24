#include <thread>
#include <iostream>
#include <mutex>
#include <chrono>
#include <syncstream>
// To prevent deadlock, share mtx.

//std::mutex mtx3;
//std::mutex mtx2;
std::mutex printmtx;
std::mutex mtx1;

void lock_func(){
    std::thread::id this_id = std::this_thread::get_id();
    while(!mtx1.try_lock()){
        {
            std::lock_guard<std::mutex> lock(printmtx);
            std::cout << "\nThread " << this_id << " tries to lock mtx1.....";
        }
        std::this_thread::sleep_for(std::chrono::seconds(2));
        if(mtx1.try_lock()){
            std::lock_guard<std::mutex> lock(printmtx);
            std::cout << "\nThread " << this_id << " succesfully locked 1";
        }
        else{
            std::lock_guard<std::mutex> lock(printmtx);
            std::cout << "\nThread " << this_id << " says that mtx1 is unavailable";
        }
    }
    {
        std::lock_guard<std::mutex> lock(printmtx);
        std::cout << "\nThread " << this_id << " is now resting 5 seconds before unlocking mtx1";
    }
        std::this_thread::sleep_for(std::chrono::seconds(5));
    {
        std::lock_guard<std::mutex> lock(printmtx);
        std::cout << "\nThread " << this_id << " unlocks mtx1 using a lock_guard()";
    }
    mtx1.unlock();
}
/*
void lock2(){
    while(mtx1.try_lock() == false){
        std::cout << "\nThread 2 tries to lock 1.....";
        std::this_thread::sleep_for(std::chrono::seconds(2));

            if(mtx1.try_lock()){
                std::cout << "\nThread 2 succesfully locked 1";
                break;
            }
            else{
                std::cout << "\nThread 2 says that lock 1 is unavailable";
            }
    }
    std::cout << "\nThread 2 resting 5 seconds before unlocking 1";
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "\nThread 2 unlocks 1 using unlock()";
    mtx1.unlock();
}

void lock3(){
    while(mtx1.try_lock() == false){
        std::cout << "\nThread 3 tries to lock 1....";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        if(mtx1.try_lock()){
            std::cout << "\nThread 3 succesfully locked 1";
            break;
        }
        else{
            std::cout << "\nThread 3 says that lock 1 is unavailable";
        }
    }
    std::cout << "\nThread 3 resting 10 seconds before unlocking 1";
    std::this_thread::sleep_for(std::chrono::seconds(10));
    std::cout << "\nThread 3 unlocks 1 using unlock()";
    mtx1.unlock();
}
*/

// DEADLOCKED

int main(){

    lock_func();
    std::thread race1(lock_func);
    std::thread race2(lock_func);
    std::thread race3(lock_func);

    race1.join();
    race2.join();
    race3.join();

    std::cout << "\nWelcome back to main()\nmtx 1 is unlocked from all threads";


}