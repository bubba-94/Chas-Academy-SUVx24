#include <thread>
#include <iostream>
#include <chrono>
#include <atomic>
#include <bits/stdc++.h>
#include <mutex>
#include <cstdlib>

clock_t start, end;
void print_clock(clock_t start, clock_t end);
std::atomic<bool> running (true);
std::mutex thread_mutex;
std::lock_guard<std::mutex> temp_lock(thread_mutex);

void status(){
    bool onoff{};
    while(running == true){
        temp_lock;
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

void random_number_to_f(){   
    srand(time(NULL));
    float converted_number{};
    float random_number{};
    
    while (running == true){
        temp_lock;
        // Random between 0 -> 11: (0 + 5 -> 11 + 5) = 5-16 
        random_number = rand() % 11 + 5;
        std::cout << "\nFrom random_number_to_f(): ";
        // C to F
        converted_number = (random_number * (9.0/5.0)) + 32;
        std::cout << "[" << random_number << "] converted to F': " << converted_number;
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }
}

void print_word(){
    while (running == true){
        temp_lock;
        std::string word = "Concurrency";
        std::string regenerated_word{};

            for (int i = 0; i < word.length(); i++)
            {
                std::cout << "\nFrom print_word(): ";
                std::cout << regenerated_word;
                std::cout << word[i];
                regenerated_word += word[i];
                std::this_thread::sleep_for(std::chrono::seconds(6));
            }
        }
    }

int main(){
    
    start = clock(); // Starts timer

    std::thread t1(status);
    std::thread t2(random_number_to_f);
    std::thread t3(print_word);

    std::this_thread::sleep_for(std::chrono::seconds(60));
    running = false;

    t1.join(); 
    t2.join();
    t3.join();

    end = clock(); // End timer

    print_clock(start, end); // Prints duration of program = 66 sec?!

}

void print_clock(clock_t start, clock_t end){
    double time = double (end - start) / double (CLOCKS_PER_SEC);
    std::cout << "\n------------------------------------------";
    std::cout << "\nTime elapsed = " << time * 1000 << " milliseconds.";
    std::cout << "\nTime elapsed = " << time << " seconds.";
    std::cout << "\n------------------------------------------";
}