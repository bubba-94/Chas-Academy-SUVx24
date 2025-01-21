#include <thread>
#include <iostream>
#include <cstdlib>

void first(){
    for (size_t i = 0; i < 5; i++){
        std::cout << "\nThread 1 is counting every 2nd second: " << i + 1;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
}

void second(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    for (size_t i = 0; i < 5; i++){

        std::cout << "\nThread 2 is counting every 5th second: " << i + 1;

        if (i == 2){
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            std::cout << "\nFASTER! Thread 2, FASTER!";
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
        
    }
}

int main (){
    std::system("cls");
    std::thread hey(first);
    std::thread hello(second);
    hey.join();
    hello.join();
}