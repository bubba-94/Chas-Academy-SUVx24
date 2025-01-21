#include <iostream>
#include <array>


void printscore(std::array<int, 3> &maxscore);


int main(){

    std::array<int, 3> maxscore = {200,190,180};

    int *currentscore = new int [3];

    printscore(maxscore);
    
    for (int i = 0; i < maxscore.size(); i++)
    {
        std::cout << "\nPlayer [" << i + 1 << "]";
        std::cout << "\nWhats your current score: ";
        std::cin >> currentscore[i];
        if (currentscore[i] > maxscore [i])
        {
            maxscore[i] = currentscore[i]; 
        } 
    }

    printscore(maxscore);
}

void printscore(std::array<int, 3> &maxscore){
    // Print scores 
    for (int i = 0; i < maxscore.size(); i++)
    {
        std::cout << "\nHighscore index: [" << i + 1 << "]: " << maxscore[i]; 
    }
}
