#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
private:
    std::string m_product;
    double m_price;
    int m_quantity;
public: 
    Product(std::string product, double price, int quantity);
    double getPrice()const ;
    int getQuantity()const ;
    void setName(const std::string &name);
    void setPrice(double price);
    void setQuantity(int quantity);

};

#endif