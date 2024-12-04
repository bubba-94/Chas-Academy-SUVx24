#include "Team.h"
#include "TeamPlayer.h"
#include <string>
#include <vector>
#include <iostream>

// Constructor with list initialization
Team::Team(std::string team_name) : team_name(team_name)
{
}

void Team::addNewPlayer()
{
    std::string newId, newName, position;
    int newAge{0}, games_played{0};

    std::cout << "---Add a new player---"<< std::endl;
    std::cout << "Create new ID (XXX): " << std::endl;
    std::getline(std::cin, newId);
    std::cout << "Name: " << std::endl;
    std::getline(std::cin, newName);
    std::cout << "Age: " << std::endl;
    std::cin >> newAge;
    std::cin.ignore();
    std::cout << "Position: ";
    std::getline(std::cin, position);
    
    TeamPlayer newPlayer(newId, newName, newAge, position, games_played);
    players.push_back(newPlayer);
}