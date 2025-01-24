/**
 * @file documentation.cpp
 * @author Johan Modin(carljohan_modin@gmail.com)
 * @brief 
 * 
 * @version 0.1
 * @date 2025-01-22
 * 
 * @copyright Copyright (c) 2025
 */

#include <thread>
#include <mutex>
#include <iostream>

/**
 * @brief 
 * worker thread for thread 1
 * @param mtx  
 */

void worker(std::mutex &mtx){
    std::cout << "Hello, world!";
}
int main(){

    std::mutex mtx; /*! <Declares a mutex variable for threads to share*/
    std::thread t1(worker, std::ref(mtx));

    t1.join();

    std::cout << "\nmain() again";
}
