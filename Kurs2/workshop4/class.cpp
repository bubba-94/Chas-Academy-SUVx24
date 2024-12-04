#include <iostream>
using namespace std;

class Game 
{
public:
    int number = 0;

    void printnumber()
    {
        number = 10;
        cout << number;
    }
};

int main()
{
    Game game1;
    game1.number = 20;
    cout << game1.number; 
    game1.printnumber();
    cout << game1.number;
    game1.number = 20
;
    cout << game1.number;
}