// I affirm that all code given below was written solely by me, Tommy Clauson, and that any help I received adhered to the rules stated for this exam.
#include <BaseBallPlayer.h>
#include <BaseBallTeam.h>

using namespace std;

// no argument constructor for team
/*
BaseBallTeam::BaseBallTeam()
{
    newname = "Team";
    playerCount = 0;
    BaseballPlayer[];
}
/*/
// Overload constructor for Team Name
BaseBallTeam::BaseBallTeam(string name)
{
    newteamname = name; // Initialize newteamname to be the name given by user
    playercount = 0; // Initialize player count to be 0 because need to fill the array with players
}

// Func for getting number of players on team
int BaseBallTeam::GetPlayerCount()
{
    return playerCount;
}

// Func for adding player to the team
void BaseBallTeam::AddPlayer(BaseBallPlayer& player)
{
    for (int i = 0; i < BaseballPlayer.size(); i++)
    {
        BaseballPlayer[i] = player;
    }
}

// Func for getting player with spec name
BaseBallPlayer& BaseBallTeam::GetPlayerWithName(srting name)
{
    for (int i = 0; i < BaseballPlayer.size(); i++)
    {
        if ((BaseballPlayer.at(i).GetName().compare(name)) == 0)
        {
            return BaseballPlayer.at(i);
        }
    }

    BaseballPlayer *name = new BaseBallPlayer();
        return *name // pointer for name of player
}

// Func for number of player in spec Position
int BaseBallTeam::CountPlayerAtPos(Position pos)
{
    for (int i = 0, int j = 0; i < BaseballPlayer.size(); i++)
    {
        if (BaseballPlayer.at(i).GetPos() == pos)
        {
            j++;
        }
    }
    return j;
}

BaseBallPlayer& BaseBallTeam::GetPlayerAtPos(Position pos)
{
    for (int i = 0; i < BaseballPlayer.size(); i++)
    {
        if (BaseballPlayer.at(i).GetPos() == pos)
        {
            return BaseballPlayer.at(i);
        }
    }
    BaseballPlayer *name = new BaseBallPlayer();
    return *name // pointer for name of player
}