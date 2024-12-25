#ifndef BOX_H
#define BOX_H

#include <iostream>

class Box{
private:
    int length;
    int width;
    int heigth;
public:
    Box();
    Box(int i, int w);
    Box(int i, int w, int h);
    double calculate_volume();
};


#endif