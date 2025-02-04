#include <thread>
#include <iostream>
#include <mutex>
#include <chrono>

std::mutex mtx;
int something = 0;
void callsomething(){
    for (int i = 0; i < 15; i ++){

    std::this_thread::sleep_for(std::chrono::milliseconds(500));
        {
            // Prevented, lock destroyed when out of scope.
            std::lock_guard<std::mutex> lock(mtx);
            something++;
            std::cout << something << " ";
        }
    }
}

int main(){

    std::thread race1(callsomething);
    std::thread race2(callsomething);
    std::thread race3(callsomething);

    race1.join();
    race2.join();
    race3.join();


}