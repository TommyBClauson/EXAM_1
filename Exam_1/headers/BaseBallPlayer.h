// I affirm that all code given below was written solely by me, Tommy Clauson, and that any help I received adhered to the rules stated for this exam.
#include <string>

class BaseBallPlayer{
    enum Position { Pitcher=1, Catcher, First, Second, Third, Shortstop, LeftField, CenterField, RightField, DesignatedHitter };
    
    private:
        string newname; // delcaing a string called newname to store names of players !!!!!!!!!!!error: 'string' does not name a type
        Position pos; // declaring enum Position to be call pos

    public:
        BaseBallPlayer();//Come up with a default player
        BaseBallPlayer(string name, Position pos); //Initialize a player
        string GetName(); //Get the player’s name !!!!!GETTING error: 'string' does not name a type!!!!!!!
        Position GetPos(); //Get the player’s position
};

