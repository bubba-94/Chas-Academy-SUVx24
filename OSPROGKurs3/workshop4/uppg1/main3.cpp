#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <atomic>

std::atomic<int> increment{1};
std::mutex printmtx;

void create_threads(int size, std::vector <std::thread> &threads, std::vector <std::mutex>& mtx);
void join_threads(std::vector <std::thread> &threads);

void task(int resource_index, std::vector<std::mutex> &mtx) {
    std::thread::id this_id = std::this_thread::get_id();
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
        {
            std::lock_guard <std::mutex> lock(mtx[resource_index]);
            {
                std::lock_guard<std::mutex> lock(printmtx);
                std::cout << "\nThread: (" << this_id << ") acquired mtx[" << resource_index << "]";
            }
            
            for (int i = 0; i < 10; i++){

               std::this_thread::sleep_for(std::chrono::milliseconds(1000));
               std::lock_guard<std::mutex> lock(printmtx);
               std::cout << "\nThread (" << this_id << ") and the value of increment is: " << increment;
               increment++;
               
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
}

/*
void taskB(int resource_index, std::vector<std::mutex> &mtx) {
    std::scoped_lock lock(mtx[resource_index]);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));   
    std::cout << "Task B completed." << std::endl;
}
void taskC(int resource_index, std::vector<std::mutex> &mtx) {
    std::scoped_lock lock(mtx[resource_index]);
    std::cout << "\nTask C acquired resourece resource" << resource_index;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Task C completed." << std::endl;
}
*/

int main(){

    int size{};

    std::cout << "\nHow many threads do you want to create (each thread will count ++ 10 times): ";
    std::cin >> size;
    if (size < 3){
        size = 3;
        std::cout << "\nI want atleast 3 threads.";
    }   
    else if (size > 8) {
        size = 8;
        std::cout << "\nChill, i think 8 is enough.";
    }
    std::cout << "\nLets create " << size << " threads.";
    std::cin.ignore();

    std::vector <std::mutex> mtx(size);
    std::vector <std::thread> threads;

    std::this_thread::sleep_for(std::chrono::seconds(2));
    // Running program
    create_threads(size, threads, mtx);
    join_threads(threads);


    return 0;
}

void create_threads(int size, std::vector <std::thread> &threads, std::vector <std::mutex>& mtx){
    for (int i = 0; i < size;i ++ ){
    // (i + 1) % size creates a circular dependency
    threads.emplace_back(task, i, std::ref(mtx));
    }
}
void join_threads(std::vector <std::thread> &threads){
    for (auto &thread : threads){
    thread.join();
    }
    std::cout << "\nAll tasks completed.";
}

