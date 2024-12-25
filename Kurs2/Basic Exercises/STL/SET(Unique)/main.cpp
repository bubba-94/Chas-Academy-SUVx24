#include <set>
#include <iostream>

int main(){
    std::set<int> intset;
    intset.emplace(12);
    intset.emplace(12);
    intset.emplace(13);
    intset.emplace(14);
    intset.emplace(1);
    intset.emplace(3);
    intset.emplace(6);
    intset.emplace(3);
    intset.emplace(9);
    intset.emplace(2);

    // A set handles duplicates and ignores them. 
    // Prints elements from lowest to highest.
    for (int element : intset){
        std::cout << element << " ";
    }
}