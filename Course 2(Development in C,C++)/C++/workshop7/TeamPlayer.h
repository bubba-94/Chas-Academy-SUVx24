#ifndef TEAMPLAYER_H
#define TEAMPLAYER_H

#include <string>

class TeamPlayer
{

private:
    std::string player_id;
    std::string name;
    int age{};
    std::string position;
    int games_played{};
    int scored_goals{};
    
public:

    TeamPlayer(std::string a, std::string b, int c, std::string d, int e);
    void addGamesPlayed (int games);
    void resetGamesPlayed();
    void getPlayerInfo();
    void addGoalsMade(int amount);
};

#endif