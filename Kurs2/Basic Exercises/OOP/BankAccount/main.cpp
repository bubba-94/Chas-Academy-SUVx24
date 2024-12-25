#include "BankAccount.h"

int main (){
    BankAccount b1(666, 10000.0);
    BankAccount b2(1337, 10000.0);
    
    b1.deposit(3000.0);
    b2.deposit(3000.0);

    b1.print_info();
    b2.print_info();

    b1.withdraw(5000);
    b2.withdraw(5000);
    
    b1.print_info();
    b2.print_info();
}