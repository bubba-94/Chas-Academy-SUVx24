#include <iostream>

class Measurements
{
    public:
    int x;
    int y;

    int add ()
    {
        return x+y;
    }
};

int main ()
{

Measurements *ptr = new Measurements[10];

// Both works. Initializes Measurements at index [0] with x = 21, y = 21.
(ptr + 0)->x = 21;
ptr[0].y = 21;

(ptr + 1)->x = 500;
(ptr + 1)->y = 500;

ptr[2].x = 21654;
ptr[2].y = 4423;

std::cout << "\nPOINTERS WITH NEW AND DELETE\n\n";

std::cout << "Address of &ptr: [" << &ptr << "]";

std::cout << "\nTotal of Measurements[0] using add()";
std::cout << "\n((ptr + 0)->x = (21) + ptr[0].y = (21)) * 15 = " << ptr[0].add() * 15; // 42 * 15 = 630
    std::cout << "\nAddress of ptr[0].x: " << &ptr[0].x;
    std::cout << "\nAddress of ptr[0].y: " << &ptr[0].y;

std::cout << "\n\nTotal of Measurements[1] using add()";
std::cout << "\n((ptr + 1)->x = (500) + (ptr + 1 )->y = (500)) * 15 = " << ptr[1].add() * 15 << "\n"; // 1000 * 15 = 15000
    std::cout << "\nAddress of ptr[1].x: " << &ptr[1].x;
    std::cout << "\nAddress of ptr[1].y: " << &ptr[1].y;

std::cout << "\nTotal of Measurements[2] using add()";
std::cout << "\n(ptr[2].x = (21654) + ptr[2].y = (4423)) * 15 = " << ptr[2].add() << "\n"; //  26077 * 15 = 1500
    std::cout << "\nAddress of ptr[2].x: " << &ptr[2].x;
    std::cout << "\nAddress of ptr[2].y: " << &ptr[2].y;
}