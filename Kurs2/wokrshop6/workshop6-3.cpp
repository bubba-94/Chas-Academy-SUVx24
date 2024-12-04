#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> growingList = {0,1,2,3,10};
    growingList.resize(5);
    cout << size(growingList) << endl;
    for (int i = 0; i < size(growingList); i++)
    {
        cout << growingList[i] << " ";
    }
        for (int i = 5; i < 5; i++)
        {
            cout << "Element " << i << ": ";
            cin >> growingList[i];
        }

    for(int number : growingList)
    {
        cout << endl << number ;
    }

}