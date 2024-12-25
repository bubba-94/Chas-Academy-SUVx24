#ifndef FRIENDCLASS_H
#define FRIENDCLASS_H
#include <iostream>

class Complex{
private:
    int real;
    int imaginary;
public:
    Complex(int x, int y);

    friend class Friend;
};

class Friend{

void add_complex();

};



#endif