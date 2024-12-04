#ifndef TEAM_H
#define TEAM_H

#include "TeamPlayer.h"
#include <string>
#include <vector>

class Team
{
private:
    std::string team_name;
    std::vector<TeamPlayer> players;
public:
    Team(std::string team_name);
    void addNewPlayer();
};

#endif