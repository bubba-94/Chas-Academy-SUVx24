#include <iostream>
#include <thread>


void bomb()
{
    for (size_t i = 5; 0 < i; i--)
    {
        std::cout << "\nExplode in: " << i;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    std::cout << "\nBOOOOOOOOOOOOOOOOOOOOOM!";
}

int main() {

    std::thread t1(bomb);
    // Runs an exception for thread if not join();
    t1.join();

    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\nGAME OVER!!!" << "\n";
}