#include "Product.h"

#include <iostream>

Product::Product(std::string product, double price, int quantity) 
: m_product(product), m_price(price), m_quantity(quantity) {} 

void Product::setPrice(double price)
{
   this->m_price = price;
}

void Product::setQuantity(int quantity)
{
    this->m_quantity = quantity;
}
void Product::setName(const std::string &name)
{
    this->m_product = name;
}

double Product::getPrice ()const
{
    return m_price;
}

int Product::getQuantity ()const
{
    return m_quantity;
}