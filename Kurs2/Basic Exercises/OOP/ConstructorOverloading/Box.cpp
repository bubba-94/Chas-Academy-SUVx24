#include "Box.h"

Box::Box(): length{1}, width{1}, heigth{1} {}


Box::Box(int l, int w) : length{l}, width{w}, heigth{1}{}

Box::Box(int l, int w, int h) : length{l}, width{w}, heigth{h}{}

double Box::calculate_volume(){
    return length * width * heigth;
}
