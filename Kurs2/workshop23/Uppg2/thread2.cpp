#include <thread>
#include <iostream>
#include <chrono>
#include <atomic>
#include <bits/stdc++.h>
#include <mutex>

std::atomic<bool> running (true);

void status(){
    bool onoff{};

    while(running == true){

        std::cout << "\nFrom status(): ";
        if(onoff == true){
            std::cout << "OFF";
            onoff = false;
        }
        else {
            std::cout << "ON";
            onoff = true;
        }
        std::this_thread::sleep_for(std::chrono::seconds(15));
    }
}

float random_number_to_f(){   
    srand(time(NULL));
    float converted_number{};
    float random_number{};
    
    while (running == true){
        random_number = rand() % 16 + 5;
        std::cout << "\nFrom random_number_to_f(): ";
        // C to F
        converted_number = (random_number * (9.0/5.0)) + 32;
        std::cout << "(" << random_number << ") converted to F': " << converted_number;
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }
    return random_number;
}

void print_word(){
while (running == true){
    
    std::string word = "Concurrency";
    std::string generatedword;

        for (int i = 0; i < word.length(); i++)
        {
            std::cout << "\nFrom print_word(): ";
            std::cout << generatedword;
            std::cout << word[i];
            generatedword += word[i];
            std::this_thread::sleep_for(std::chrono::seconds(6));
        }
    }
}

int main(){
    srand(time(NULL));
    
    std::thread t1(status);
    std::thread t2(random_number_to_f);
    std::thread t3(print_word);

    std::this_thread::sleep_for(std::chrono::seconds(60));
    running = false;

    t1.join();
    t2.join();
    t3.join();

    std::cout << "\nProgram ended";

}