#include <iostream>
#include <thread>
#include <cstdlib>

clock_t start, end;

void ping(){
    std::cout << "PING! ";
}
void pong(){
    std::cout << "PONG! ";
}

void print_clock(clock_t start, clock_t end){
    double time = double (end - start) / double (CLOCKS_PER_SEC);
    std::cout << "\nTime elapsed = " << time * 1000 << " milliseconds.";
    std::cout << "\nTime elapsed = " << time << " seconds.";
    std::cout << "\n------------------------------------------";
}


void call_thread (void func()){
    std::thread thread(func);
    thread.join();
}

void loop(int seconds, int size){

    int loops{};
    std::cout << "\nClock started. Estimated time: " << seconds << " seconds\n";
    seconds = (seconds * 1000 / size) /2; // Divided by the amount of times it prints

    for (size_t i = 0; i < size; i++){

        if (loops == 5)
        {
            std::cout << "\n";
            loops = 0;
        }
        call_thread(ping);
        std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
        call_thread(pong);
        std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
        loops++;
    }

}
void loop2(int seconds, int size){
    
    int loops{};
    std::cout << "\nClock started. Estimated time: " << seconds << " seconds\n";
    seconds = (seconds * 1000 / size) /2; // Divided by the amount of times it prints

    for (size_t i = 0; i < size; i++){
        if (loops == 5)
        {
            std::cout << "\n";
            loops = 0;
        }
        std::thread t1(ping); 
        t1.join();
        std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
        std::thread t2(pong);
        t2.join();
        std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
    }
}

int main(){
    std::system("cls");
    
    int seconds{};
    int iterations{};

    std::cout << "\nHow many seconds do you want to ping and pong: ";
    std::cin >> seconds;
    std::cin.ignore();

    std::cout << "\nHow many loops: ";
    std::cin >> iterations;
    std::cin.ignore();

    start = clock(); // start timer 
    loop(seconds, iterations);
    end = clock(); // end timer
    print_clock(start, end);

    start = clock(); // start timer 
    loop2(seconds, iterations);
    end = clock(); // end timer
    print_clock(start, end);
    
}
