#include <iostream>
#include <thread>


void ping(){
    std::cout << "\nPING!";
}
void pong(){
    std::cout << "\npong";
}


int main(){
    std::thread t1(ping);
    std::thread t2(pong);
    t1.join();
    t2.join();

    for (size_t i = 0; i < 5; i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        t1.join();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        t2.join();
    }
    std::cout << "\nDone";
}