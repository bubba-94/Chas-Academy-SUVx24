#ifndef MEMBERCUSTOMER_H
#define MEMBERCUSTOMER_H

#include "Customer.h"

class MemberCustomer : public Customer
{
public:
    double applyDiscount(double total) const override;
};
#endif 