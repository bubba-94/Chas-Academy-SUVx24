#include <thread>
#include <iostream>
#include <mutex>
#include <chrono>

int something = 0;
void callsomething(){
    while(true){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    something++;
    std::cout << something << " ";
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