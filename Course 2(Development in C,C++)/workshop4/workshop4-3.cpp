#include <iostream>
#include <string>
using namespace std;

int main()

{
    int number;
    double decimalValue;
    char charArray[10];
    string cppString;
    string line;
    char c;
    cout << "Type a number: ";
    cin >> number;
     cout << "Type a double value: ";
    cin >> decimalValue;
     cout << "Type a string(no more than 10 characters): ";
    cin >> charArray;
     cout << "Type a string: ";
    cin >> cppString >> line;
     cout << "Type a character: ";
    cin >> c;
    cout << "You wrote: " << number << endl << decimalValue << endl << charArray << endl << cppString << endl << line << endl << c; 
}