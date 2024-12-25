#include <map>
#include <string>
#include <iostream>

int main (){

    std::string word{"Concurrency"};
    std::map <char,int> m;


    
    for (char c: word
    ){
        m[c]++;
    }
}