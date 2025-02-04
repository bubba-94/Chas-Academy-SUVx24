#include "ShoppingCart.h"
#include "VIPCustomer.h"
#include "RegularCustomer.h"
#include "MemberCustomer.h"
#include <iostream>

int main ()
{
    Product apple("Apple", 0.7, 50);
    Product milk("Milk", 2, 50);
    Product banana("Banana", 0.5, 50);
    Product coke("Coke", 0.5, 1000);
    Product chicken("Chickenbreast", 7, 100);
    Product kiwi("Kiwi", 0.8, 50);
    Product orange("Orange", 0.3, 50);
    Product gum("Gum", 2, 75);


    ShoppingCart cart1;
    cart1.addProduct(apple);
    cart1.addProduct(milk);
    cart1.addProduct(banana);

    RegularCustomer regularCustomer;
    VIPCustomer vipCustomer;
    MemberCustomer memberCustomer;

    std::cout << "Total amount for a Regular customer = " <<  cart1.calculateTotal(regularCustomer) << " kr" << std::endl;
    std::cout << "Total amount for a Member customer = " <<  cart1.calculateTotal(memberCustomer) << " kr" << std::endl;
    std::cout << "Total amount for a VIP customer = " <<  cart1.calculateTotal(vipCustomer) << " kr" << std::endl;
}
