#include <string>
#include <iostream>
using namespace std;
int main()
{
    int length, width;
    cout << "Type length and width: ";
    cin >> length >> width;
    cout << "Area: cm" << length * width << endl;
    cout << "Perimeter: " << length * 2 + width *2;
}