#ifndef REGULARCUSTOMER_H
#define REGULARCUSTOMER_H

#include "Customer.h"

class RegularCustomer : public Customer
{
public:
    double applyDiscount(double total) const override;
};
#endif