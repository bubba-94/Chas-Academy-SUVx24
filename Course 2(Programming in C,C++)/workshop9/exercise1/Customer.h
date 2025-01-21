#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

class Customer
{  
    
public:
    virtual ~Customer() = default;
    virtual double applyDiscount(double total) const = 0;
};
#endif