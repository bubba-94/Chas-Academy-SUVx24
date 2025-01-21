#include <iostream>
#include <cstring>
using namespace std;


class Card
{
private:
    char suit[10];
    char value[10];
    
    public: 
    void setCard(const char *newValue,const char *newSuit)
    {
        strcpy(value, newValue);
        strcpy(suit, newSuit);
    }
    void printCard()
    {
        cout << value << " of " << suit << endl;
    }

};

int main()
{
    Card deck[52];
    deck[0].setCard("Ace", "Hearts");
    deck[0].printCard();
    deck[1].setCard("Two", "Hearts");
    deck[1].printCard();   
}