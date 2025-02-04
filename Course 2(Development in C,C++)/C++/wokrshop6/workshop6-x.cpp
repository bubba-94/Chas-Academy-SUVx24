#include <iostream>
#include <string>
using namespace std;

class Highscore
{
private:
    string name;
    int count;
    public:

    void saveHighscore(int count)
    {
        cout << "Print name and save your highscore";
        cin >> name;
        count = count;
    }
    void printHighscore()
    {
        
    }
};

int main()
{
    Highscore leaderboard[10];
    srand(time(0));
    int count = 0;
    int x = 0;
    int randomNum = 1 + (rand() % 100);
    cout << "Guess a random number and see if it is correct!" << endl;
    while (true)
    {
        count ++;
        cin >> x;
        if (x == randomNum)
        {
            cout << "Congratulations, you did it in " << count << " tries!" << endl;
            leaderboard[0].saveHighscore(count);
            break;
        }
        else if (x > randomNum)
        {
            cout << "Lower!" << endl;
        }
        else if (x < randomNum)
        {
            cout << "Higher!" << endl;
        }
    }
}
