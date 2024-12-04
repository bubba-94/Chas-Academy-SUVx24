#ifndef VIPCUSTOMER_H
#define VIPCUSTOMER_H

#include "Customer.h"

class VIPCustomer : public Customer
{
public:
    double applyDiscount(double total) const override;
};
#endif