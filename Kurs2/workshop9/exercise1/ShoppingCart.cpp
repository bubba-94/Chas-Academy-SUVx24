#include "ShoppingCart.h"

#include <iostream>
// Is this really needed?

void ShoppingCart::addProduct(const Product &product) 
{
    m_products.push_back(product);
}
double ShoppingCart::calculateTotal(const Customer& customer) const
{
    int total{};
    for (const auto produce : m_products)
    {
        total += produce.getPrice() * produce.getQuantity();
    }

    return customer.applyDiscount(total);
}   