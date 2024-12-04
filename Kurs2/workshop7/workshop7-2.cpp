#include <string>
#include <iostream>

class TeamPlayer
{
private:
    std::string player_id;
    std::string name;
    int age{};
    std::string position;
    int games_played{};

    public:

        // COnstructor
        TeamPlayer(std::string a, std::string b, int c, std::string d, int f)
        {
            player_id = a;
            name = b;
            age = c;
            position = d;
            games_played = f;
        }
        void addGamePlayed(int games)
        {
            games_played += games;
        }
        void resetGamesPlayed()
        {
                games_played = 0;
                std::cout << "Games played set to 0" << std::endl;
        }
        void getPlayerInfo()
        // Skriver ut listan
        {
                std::cout << "ID: " << player_id << std::endl; 
                std::cout << "Name: " << name << std::endl;
                std::cout << "Age: " << age << std::endl;
                std::cout << "Position: " << position << std::endl;
                std::cout << "Games: " << games_played << std::endl;
                std::cout << "---------------" << std::endl;
        }
};
int main()
{   
    TeamPlayer player1("333", "Johan Modin", 30, "Back", 0);
    TeamPlayer player2("666", "Devil", 2024, "Libro", 0);

    player1.getPlayerInfo();
    player2.getPlayerInfo();
    player1.addGamePlayed(5);
    player2.addGamePlayed(3);
    player1.getPlayerInfo();
    player2.getPlayerInfo();
    player2.resetGamesPlayed();
    player1.getPlayerInfo();
    player2.getPlayerInfo();
    
}