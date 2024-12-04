#include "TeamPlayer.h"
#include <string>
#include <iostream>

// Constructor with list initialization         
TeamPlayer::TeamPlayer(std::string a, std::string b, int c, std::string d, int e) : player_id(a), name(b), age(c), position(d), games_played(e)
{
}
void TeamPlayer::addGamesPlayed(int games)
{
    games_played += games;
}
void TeamPlayer::resetGamesPlayed()
{
    
        games_played = 0;
        std::cout << "Games played set to 0" << std::endl;
}
void TeamPlayer::getPlayerInfo()
// Skriver ut listan
{
        std::cout << "ID: " << player_id << std::endl; 
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Position: " << position << std::endl;
        std::cout << "Games: " << games_played << std::endl;
        std::cout << "---------------" << std::endl;
}
void TeamPlayer::addGoalsMade(int amount)
{
    scored_goals += amount;
}