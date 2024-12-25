#include "Geometry.h"
#include <vector>
int main(){

    std::vector <Geometry*> shapes;
    // New shapes into a vector 
    shapes.push_back(new Circle(4));
    shapes.push_back(new Rectangle(4,10));
    shapes.push_back(new Circle (7));
    shapes.push_back(new Rectangle (5,19));
    shapes.push_back(new Circle (10));

    for (size_t i = 0; i < 5; i ++){
        std::cout << "\nShape [" << i+1 << "]";
        shapes[i]->area();
    }
    // Deleting memories, calls geometry destructor for each deletion
    for (Geometry* shape : shapes){

        delete shape;
    }
}