// I affirm that all code given below was written solely by me, Tommy Clauson, and that any help I received adhered to the rules stated for this exam.
#include <iostream>
#include <string>
#include "BaseBallPlayer.h"
#include "BaseBallTeam.h"

using namespace std;

int main() {
    BaseballPlayer players[] = {
        BaseBallPlayer("Kyle Seager", Third), BaseBallPlayer("Daniel Vogelbach", DesignatedHitter), 
        BaseBallPlayer("Mitch Haniger", RightField), BaseBallPlayer("Mallex Smith", CenterField), 
        BaseBallPlayer("Shed Long", Second), BaseBallPlayer("Dee Gordon", Second), 
        BaseBallPlayer("Omar Narvaez", Catcher), BaseBallPlayer("Domingo Santana", LeftField),
        BaseBallPlayer("Felix Hernandez", Pitcher), BaseBallPlayer("Marco Gonzalez", Pitcher), 
        BaseBallPlayer("Justice Sheffield", Pitcher), BaseBallPlayer("Mike Leake", Pitcher)
    };
    BaseBallTeam team("Seattle Mariners");

    int count = sizeof(players)/sizeof(players[0]);
    for (int i=0; i<count; i++)
        team.AddPlayer(players[i]);

    int errors = 0;
    if (team.GetPlayerCount() != count) {
        cout << "Playercount Failed" << endl;
        errors++;
    }

    //Make sure we can find an existing player
    BaseBallPlayer bp = team.GetPlayerWithName("Shed Long");
    if (bp.GetName() != "Shed Long") {
        cout << "GetPlayerWithName failed: " << bp.GetName() << endl;
        errors++;
    }

    BaseBallPlayer defaultPlayer;
    //This player does not exist, so we should get the default BaseballPlayer
    bp = team.GetPlayerWithName("Does Not Exist");
    if (bp.GetName() != defaultPlayer.GetName()) {
        cout << "GetPlayerWithName with wrong name failed: " << bp.GetName() << endl;
        errors++;
    }

    if (team.CountPlayersAtPos(Pitcher) != 4) {
        cout << "CountPlayersAtPos failed: " << team.CountPlayersAtPos(Pitcher) << endl;
        errors++;
    }

    //Make sure we can find an existing player
    bp = team.GetPlayerAtPos(Catcher);
    if (bp.GetName() != "Omar Narvaez" && bp.GetPos() != Catcher) {
        cout << "GetPlayerAtPos failed: " << bp.GetName() << endl;
        errors++;
    }

    //This player does not exist, so we should get the default BaseballPlayer
    bp = team.GetPlayerAtPos(Shortstop);
    if (bp.GetName() != defaultPlayer.GetName()) {
        cout << "GetPlayerAtPosition with invalid position failed: " << bp.GetName() << endl;
        errors++;
    }

    if (errors == 0) {
        cout << "Tests passed!\n";
    }
}