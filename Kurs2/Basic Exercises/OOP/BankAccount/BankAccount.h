#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount{
private:
    int m_accnumber;
    double m_balance;
public:
    BankAccount(int accnumber, double balance);
    void deposit(double amount);
    void withdraw(double amount);
    void print_info();
};


#endif