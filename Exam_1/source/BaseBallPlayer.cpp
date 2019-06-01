// I affirm that all code given below was written solely by me, Tommy Clauson, and that any help I received adhered to the rules stated for this exam.
#include <BaseBallPlayer.h>

using namespace std;

// no argument constructor for team
BaseBallPlayer::BaseBallPlayer()
{
    newname = "who"; // Initialize string "newname" to be who
    Position = First;  // Initialize player "who" to play first base
}

// Func for player
BaseBallPlayer::BaseBallPlayer(string name, Position pos)
{
    newname = name; // Initialize newname to be given name by user
    pos = pos; // Initialize pos to be given position by user (might need a new parameter for pos in func)
}

// Func for getting name of player
string BaseBallPlayer::GetName()
{
    return name;
}

// FUnc for getting players position
Position BaseBallPlayer::GetPos()
{
    return pos;
}