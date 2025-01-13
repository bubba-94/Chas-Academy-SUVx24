Exercise 1: Task Queue with Worker Threads
Problem: You are tasked with implementing a simple task processing system with multiple worker threads. A task queue is shared among several worker threads. Each worker thread will take a task from the queue and process it.

The task queue needs to be synchronized using std::mutex and std::condition_variable to ensure that:

Worker threads wait until there are tasks available in the queue.
If the queue is empty, workers should block until a task is added.
New tasks are added to the queue by a producer thread, which wakes up waiting worker threads once a task is available.
Steps:

Use a std::queue to represent the task queue.
Synchronize access to the task queue using std::mutex.
Use std::condition_variable to notify workers when tasks are available and to signal when the task queue becomes empty.
Implement the producer thread to add tasks to the queue and the worker threads to process tasks.
Ensure that worker threads can handle the case where the queue is empty, and the program should terminate when the queue has been processed entirely.
