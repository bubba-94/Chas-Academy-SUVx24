#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int x = rand() % 101;
    for (int i = 0; i < 5; i ++)
    {
        cout << x << endl;
    }
}