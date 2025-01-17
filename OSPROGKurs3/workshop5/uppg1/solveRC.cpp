#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <chrono>

class BankAccount {
    public:
    BankAccount() : balance(0) {}
    
    void deposit(int amount) {
        balance += amount; // Increment the balance
        std::cout <<"\nThread (" << std::this_thread::get_id() << ") \tafter deposit, current balance: " << balance;
    }
    void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount; // Decrement the balance
        } else {
        std::cout << "\nInsufficient funds for withdrawal of " << amount << "!\n";
    }
    std::cout << "\nThread (" << std::this_thread::get_id() << ") \tafter withdrawal, current balance: " << balance;
    }

    int getBalance() const {
        return balance;
    }

    private:
    int balance; // Shared resource
    };

    void performTransactions(BankAccount& account, std::mutex &mtx) {
        for (int i = 0; i < 10; ++i) {
            mtx.lock();
            account.deposit(1);
            account.withdraw(1);
            mtx.unlock();
        }
    }
int main() {
    std::mutex mtx;
    BankAccount account;
    std::vector<std::thread> threads;

    // Launch multiple threads
    for (int i = 0; i < 100; ++i) {
        threads.emplace_back(performTransactions, std::ref(account), std::ref(mtx));
    }

    // Join all threads
    for (auto& t : threads) {
        t.join();
    }
    
    std::cout << "\nFinal balance: " << account.getBalance() << "\n";

    return 0;
}
