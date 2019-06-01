// I affirm that all code given below was written solely by me, Tommy Clauson, and that any help I received adhered to the rules stated for this exam.
#include <BaseBallPlayer.h>
#include <string>
#include <array>
class BaseBallTeam
{
    private:
        string newteamname; // declaring string newteamname
        int playerCount; // delcaring int playercount
        BaseballPlayer []; // delcaring array of players 
        
    public:
        BaseBallTeam(string name);
        int GetPlayerCount();//How many players are on the team?
        void AddPlayer(BaseballPlayer& player); //Add a player to the team
        BaseballPlayer& GetPlayerWithName(string name); //Find a player with a name. If that player doesn’t exist, return the default player
        int CountPlayersAtPos(Position pos); //How many players play the given position?
        BaseballPlayer& GetPlayerAtPos(Position pos); //Find a player at a position. If that player doesn’t exist, return the default player


}