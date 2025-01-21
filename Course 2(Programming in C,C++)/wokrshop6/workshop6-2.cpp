#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string niceString = "This is a fine String"; 
    niceString += " Would be a shame if anything happened to it.";
    std::cout << niceString;
    cout << endl <<niceString.find("Would") << endl;
}