#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(int accnumber, double balance): m_accnumber{accnumber}, m_balance{balance}{}

void BankAccount::deposit(double amount){
    this->m_balance += amount;
}
void BankAccount::withdraw(double amount){
    this->m_balance -= amount;
}
void BankAccount::print_info(){
    std::cout << "\nAccount: " << this->m_accnumber;
    std::cout << "\nBalance: " << this->m_balance;    
}