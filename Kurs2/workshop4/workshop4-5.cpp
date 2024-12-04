#include <iostream>
#include <string>
using namespace std;

int area(int x, int y);
int perimeter(int x, int y);

int main ()
{
    area(3, 5);
    perimeter(6,9);
}
int area(int x, int y)
{ 
    cout << "The area equals: " << x*y << endl;
    return 0;
}
int perimeter(int x, int y)
{
    cout << "The perimeter equals: " << x+x+y+y << endl;
    return 0;
}