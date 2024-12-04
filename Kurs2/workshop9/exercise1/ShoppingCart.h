#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Customer.h"
#include "Product.h"
#include <iostream>
#include <vector>

class ShoppingCart
{
private: 
    std::vector <Product> m_products;
public:
    void addProduct(const Product& product);
    double calculateTotal(const Customer& customer) const;
};

#endif