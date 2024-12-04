#include <iostream>
using namespace std;

class Card
{
public:
    char suit[10];
    char value[10];
};

int main()
{
    Card card1 = {"Hearts", "Four"};
    Card card2 = {"Clubs", "Eight"};
    Card cardArr[3] = {{"Spades", "Jack"},{"Clubs", "Queen"},{"Diamonds", "Nine"}};

    cout << card1.suit << endl << card1.value; 
    printf("\n%s %s", card2.suit, card2.value);

    cout << cardArr[0].suit << endl;

}