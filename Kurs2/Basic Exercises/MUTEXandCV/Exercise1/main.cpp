#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <string>
#include <chrono>
#include <atomic>

std::atomic <bool> running{true};

void consumer_thread(std::queue<std::string> &q, std::condition_variable &cv, std::mutex &mtx);
void print_queue(std::queue<std::string> &q);
void producer_thread(std::queue<std::string> &q, std::condition_variable &cv, std::mutex &mtx);

int main(){
    // Task list
    std::queue<std::string> tasks;

    // Variables used for multiple thread use.
    std::mutex mtx;
    std::condition_variable cv;

    // Thread for producing tasks via std::cin
    std::thread producer(producer_thread, std::ref(tasks), std::ref(cv), std::ref(mtx));
    std::thread printqueue(print_queue, std::ref(tasks));

    // Two worker taking tasks via q.front()
    // std::thread worker1(worker_thread);
    // std::thread worker2(worker_thread);

    // Thread to print existing task list.

    producer.join();
    printqueue.join();
    //worker1.join();
    //worker2.join();

}

void producer_thread(std::queue<std::string>&q, std::condition_variable &cv, std::mutex &mtx){
    
    std::cout << "\nReading from: producer_tasks()";
    std::string task;    

    while (running == true){ 
        // Variable to store the new task
        std::cout << "\nAssign a task to task list: ";
        getline(std::cin, task);
        {
            std::lock_guard<std::mutex> lock(mtx);
            q.push(task);
        }
        std::cout << "Task admitted";
        cv.notify_all();
        std::this_thread::sleep_for(std::chrono::seconds(15));
    }
}

void consumer_thread(std::queue<std::string> &q, std::condition_variable &cv, std::mutex &mtx){

}

void print_queue(std::queue<std::string> &q){
    std::this_thread::sleep_for(std::chrono::seconds(10));
    // Thread just for printing, no mtx or cv needed??
    // Copies existing task queue to another to avoid race conditions.
    std::queue<std::string> &q_copy = q;

    while (running == true){
        if (q_copy.empty()) break; // Break loop if q is empty

        std::cout << "\n--TASK LIST--";
        
        // Indexing
        int i{1};
        // Iterate through queue every 10 sec.
        while (!q_copy.empty()){
            std::cout << "\n" << i << ": " << q_copy.front();
            q_copy.pop();
            ++i;
        }
        std::cout << "\nprint_queue done.";
    }
}