#include <thread>
#include <iostream>

void first(){
    for (size_t i = 0; i < 5; i++){
        std::cout << "\nThread 1 is counting: " << i ;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
}

void second(){
    for (size_t i = 0; i < 5; i++){
        std::cout << "\nThread 2 is counting: " << i;
        if (i == 2)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            std::cout << "\nFASTER!";
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    }
}

int main (){
    std::thread hey(first);
    hey.join();
    std::thread hello(second);
    hello.join();
}