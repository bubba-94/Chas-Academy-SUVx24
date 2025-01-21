#include <iostream>

/* Skapa ett program som använder både statisk och dynamisk minnesallokering.
• Programmet ska innehålla:
o En statisk array som lagrar maxpoängen för tre spelare.
o Dynamiska variabler som används för att lagra nuvarande poäng för varje
spelare.
• Använd new för att skapa de dynamiska variablerna och delete när variablerna inte
längre behövs.
Följande är förslag på möjlig output:
 */
int main() {


// Static memory allocation
int maxscore[3] = {200,150,175}; 
// Dynamic memory allocation
int *currentscore = new int[3];

// Current scores for each index:

    for (int i = 0; i < 3; i++)
    {
        std::cout << "\nHighscore for person [" << i+1 << "]: " << maxscore[i];
    }

    for(int i = 0; i < 3; i++)
    {
        std::cout << "\nPerson [" << i << "], whats your current score? ";
        std::cin >> currentscore[i];
        std::cin.ignore();
        if (currentscore[i] > maxscore[i]) {
            maxscore[i] = currentscore[i];
        }
    }

    delete []currentscore;

    // Display new scores
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\nHighscore for person [" << i+1 << "]: " << maxscore[i];
    }

    return 0;
}