Exercise 2: Read-Write Lock with Multiple Readers and Writers
Problem: You need to implement a read-write lock that allows multiple threads to read from a shared resource concurrently, but only one thread can write at a time, and it should block readers when writing is in progress.

The challenge is to implement the following requirements:

Multiple reader threads can concurrently access the shared resource.
Writer threads should have exclusive access to the shared resource.
If a writer is writing, all readers and other writers should be blocked until the writer finishes.
If there are no writers, multiple readers can access the resource concurrently.
Use std::mutex and std::condition_variable to manage the access synchronization and ensure fairness.
Steps:

Use a std::mutex to protect the shared resource and to control access for reading and writing.
Use a std::condition_variable to notify threads when they are allowed to access the resource.
Implement the read-write logic where the resource is read concurrently by multiple threads but is written exclusively by a single writer.
Ensure that no writer thread is starved by balancing reader and writer access.
Both of these exercises aim to improve your understanding of advanced synchronization patterns and multi-threaded programming concepts. They will also help you practice proper use of mutexes and condition variables to solve common concurrency problems.