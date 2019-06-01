# EXAM_1
errors i was getting
> Executing task: C:/MinGW/bin/g++.exe -o C:\Users\tommy\OneDrive\Desktop\Exam_1/bin/main.exe -I C:\Users\tommy\OneDrive\Desktop\Exam_1/headers -ggdb C:\Users\tommy\OneDrive\Desktop\Exam_1/source/*.cpp <

In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:1:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:7:9: error: 'string' does not name a type
         string newname; // delcaing a string called newname to store names of players !!!!!!!!!!!error: 'string' does not name a type
         ^~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:12:31: error: expected ')' before 'name'
         BaseBallPlayer(string name, Position pos); //Initialize a player
                               ^~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:13:9: error: 'string' does not name a type
         string GetName(); //Get the playerâ?Ts name !!!!!GETTING error: 'string' does not name a type!!!!!!!
         ^~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp: In constructor 'BaseBallPlayer::BaseBallPlayer()':
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:8:5: error: 'newname' was not declared in this scope
     newname = "who"; // Initialize string "newname" to be who
     ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:9:14: error: expected unqualified-id before '=' token
     Position = First;  // Initialize player "who" to play first base
              ^
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp: At global scope:
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:13:1: error: prototype for 'BaseBallPlayer::BaseBallPlayer(std::__cxx11::string, BaseBallPlayer::Position)' does not match any in class 'BaseBallPlayer'
 BaseBallPlayer::BaseBallPlayer(string name, Position pos)
 ^~~~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:1:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:3:7: error: candidates are: constexpr BaseBallPlayer::BaseBallPlayer(BaseBallPlayer&&)
 class BaseBallPlayer{
       ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:3:7: error:                 constexpr BaseBallPlayer::BaseBallPlayer(const BaseBallPlayer&)
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:6:1: error:                 BaseBallPlayer::BaseBallPlayer()
 BaseBallPlayer::BaseBallPlayer()
 ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:13:45: error: 'enum BaseBallPlayer::Position' is private within this context
 BaseBallPlayer::BaseBallPlayer(string name, Position pos)
                                             ^~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:1:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:6:14: note: declared private here
         enum Position { Pitcher=1, Catcher, First, Second, Third, Shortstop, LeftField, CenterField, RightField, DesignatedHitter };
              ^~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:20:32: error: no 'std::__cxx11::string BaseBallPlayer::GetName()' member function declared in class 'BaseBallPlayer'
 string BaseBallPlayer::GetName()
                                ^
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallPlayer.cpp:26:1: error: 'Position' does not name a type
 Position BaseBallPlayer::GetPos()
 ^~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:1:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:7:9: error: 'string' does not name a type
         string newname; // delcaing a string called newname to store names of players !!!!!!!!!!!error: 'string' does not name a type
         ^~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:12:31: error: expected ')' before 'name'
         BaseBallPlayer(string name, Position pos); //Initialize a player
                               ^~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:13:9: error: 'string' does not name a type
         string GetName(); //Get the playerâ?Ts name !!!!!GETTING error: 'string' does not name a type!!!!!!!
         ^~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:2:0,
                 from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:2:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:3:7: error: redefinition of 'class BaseBallPlayer'
 class BaseBallPlayer{
       ^~~~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:1:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:3:7: error: previous definition of 'class BaseBallPlayer'
 class BaseBallPlayer{
       ^~~~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:2:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:8:9: error: 'string' does not name a type
         string newteamname; // declaring string newteamname
         ^~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:10:9: error: 'BaseballPlayer' does not name a type
         BaseballPlayer []; // delcaring array of 25, max amount of players allowed on rooster
         ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:13:29: error: expected ')' before 'name'
         BaseBallTeam(string name);
                             ^~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:15:24: error: 'BaseballPlayer' has not been declared
         void AddPlayer(BaseballPlayer& player); //Add a player to the team
                        ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:16:9: error: 'BaseballPlayer' does not name a type
         BaseballPlayer& GetPlayerWithName(string name); //Find a player with a name. If that player doesnâ?Tt exist, return the default player
         ^~~~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:2:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:17:31: error: 'Position' has not been declared
         int CountPlayersAtPos(Position pos); //How many players play the given position?
                               ^~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:18:9: error: 'BaseballPlayer' does not name a type
         BaseballPlayer& GetPlayerAtPos(Position pos); //Find a player at a position. If that player doesnâ?Tt exist, return the default player
         ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:21:1: error: expected ';' after class definition
 }
 ^
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:16:1: error: prototype for 'BaseBallTeam::BaseBallTeam(std::__cxx11::string)' does not match any in class 'BaseBallTeam'
 BaseBallTeam::BaseBallTeam(string name)
 ^~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:2:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: error: candidates are: constexpr BaseBallTeam::BaseBallTeam(BaseBallTeam&&)
 class BaseBallTeam
       ^~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: error:                 constexpr BaseBallTeam::BaseBallTeam(const BaseBallTeam&)
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: error:                 BaseBallTeam::BaseBallTeam()
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:29:6: error: prototype for 'void BaseBallTeam::AddPlayer(BaseBallPlayer&)' does not match any in class 'BaseBallTeam'
 void BaseBallTeam::AddPlayer(BaseBallPlayer& player)
      ^~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:2:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:15:14: error: candidate is: void BaseBallTeam::AddPlayer(int&)
         void AddPlayer(BaseballPlayer& player); //Add a player to the team
              ^~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:38:49: error: 'BaseBallPlayer& BaseBallTeam::GetPlayerWithName' is not a static data member of 'class BaseBallTeam'
 BaseBallPlayer& BaseBallTeam::GetPlayerWithName(srting name)
                                                 ^~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTeam.cpp:38:49: error: 'srting' was not declared in this scope
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:3:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:7:9: error: 'string' does not name a type
         string newname; // delcaing a string called newname to store names of players !!!!!!!!!!!error: 'string' does not name a type
         ^~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:12:31: error: expected ')' before 'name'
         BaseBallPlayer(string name, Position pos); //Initialize a player
                               ^~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:13:9: error: 'string' does not name a type
         string GetName(); //Get the playerâ?Ts name !!!!!GETTING error: 'string' does not name a type!!!!!!!
         ^~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:2:0,
                 from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:4:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:3:7: error: redefinition of 'class BaseBallPlayer'
 class BaseBallPlayer{
       ^~~~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:3:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallPlayer.h:3:7: error: previous definition of 'class BaseBallPlayer'
 class BaseBallPlayer{
       ^~~~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:4:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:8:9: error: 'string' does not name a type
         string newteamname; // declaring string newteamname
         ^~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:10:9: error: 'BaseballPlayer' does not name a type
         BaseballPlayer []; // delcaring array of 25, max amount of players allowed on rooster
         ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:13:29: error: expected ')' before 'name'
         BaseBallTeam(string name);
                             ^~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:15:24: error: 'BaseballPlayer' has not been declared
         void AddPlayer(BaseballPlayer& player); //Add a player to the team
                        ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:16:9: error: 'BaseballPlayer' does not name a type
         BaseballPlayer& GetPlayerWithName(string name); //Find a player with a name. If that player doesnâ?Tt exist, return the default player
         ^~~~~~~~~~~~~~
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:4:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:17:31: error: 'Position' has not been declared
         int CountPlayersAtPos(Position pos); //How many players play the given position?
                               ^~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:18:9: error: 'BaseballPlayer' does not name a type
         BaseballPlayer& GetPlayerAtPos(Position pos); //Find a player at a position. If that player doesnâ?Tt exist, return the default player
         ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:21:1: error: expected ';' after class definition
 }
 ^
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp: In function 'int main()':
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:9:5: error: 'BaseballPlayer' was not declared in this scope
     BaseballPlayer players[] = {
     ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:17:41: error: no matching function for call to 'BaseBallTeam::BaseBallTeam(const char [17])'
     BaseBallTeam team("Seattle Mariners");
                                         ^
In file included from C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:4:0:
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: note: candidate: BaseBallTeam::BaseBallTeam()
 class BaseBallTeam
       ^~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: note:   candidate expects 0 arguments, 1 provided
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: note: candidate: constexpr BaseBallTeam::BaseBallTeam(const BaseBallTeam&)
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: note:   no known conversion for argument 1 from 'const char [17]' to 'const BaseBallTeam&'
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: note: candidate: constexpr BaseBallTeam::BaseBallTeam(BaseBallTeam&&)
C:\Users\tommy\OneDrive\Desktop\Exam_1/headers/BaseBallTeam.h:5:7: note:   no known conversion for argument 1 from 'const char [17]' to 'BaseBallTeam&&'
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:19:24: error: 'players' was not declared in this scope
     int count = sizeof(players)/sizeof(players[0]);
                        ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:30:30: error: 'class BaseBallTeam' has no member named 'GetPlayerWithName'; did you mean 'GetPlayerCount'?
     BaseBallPlayer bp = team.GetPlayerWithName("Shed Long");
                              ^~~~~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:31:12: error: 'class BaseBallPlayer' has no member named 'GetName'
     if (bp.GetName() != "Shed Long") {
            ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:32:52: error: 'class BaseBallPlayer' has no member named 'GetName'
         cout << "GetPlayerWithName failed: " << bp.GetName() << endl;
                                                    ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:38:15: error: 'class BaseBallTeam' has no member named 'GetPlayerWithName'; did you mean 'GetPlayerCount'?
     bp = team.GetPlayerWithName("Does Not Exist");
               ^~~~~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:39:12: error: 'class BaseBallPlayer' has no member named 'GetName'
     if (bp.GetName() != defaultPlayer.GetName()) {
            ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:39:39: error: 'class BaseBallPlayer' has no member named 'GetName'
     if (bp.GetName() != defaultPlayer.GetName()) {
                                       ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:40:68: error: 'class BaseBallPlayer' has no member named 'GetName'
         cout << "GetPlayerWithName with wrong name failed: " << bp.GetName() << endl;
                                                                    ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:44:32: error: 'Pitcher' was not declared in this scope
     if (team.CountPlayersAtPos(Pitcher) != 4) {
                                ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:50:15: error: 'class BaseBallTeam' has no member named 'GetPlayerAtPos'; did you mean 'GetPlayerCount'?
     bp = team.GetPlayerAtPos(Catcher);
               ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:50:30: error: 'Catcher' was not declared in this scope
     bp = team.GetPlayerAtPos(Catcher);
                              ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:51:12: error: 'class BaseBallPlayer' has no member named 'GetName'
     if (bp.GetName() != "Omar Narvaez" && bp.GetPos() != Catcher) {
            ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:52:49: error: 'class BaseBallPlayer' has no member named 'GetName'
         cout << "GetPlayerAtPos failed: " << bp.GetName() << endl;
                                                 ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:57:15: error: 'class BaseBallTeam' has no member named 'GetPlayerAtPos'; did you mean 'GetPlayerCount'?
     bp = team.GetPlayerAtPos(Shortstop);
               ^~~~~~~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:57:30: error: 'Shortstop' was not declared in this scope
     bp = team.GetPlayerAtPos(Shortstop);
                              ^~~~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:58:12: error: 'class BaseBallPlayer' has no member named 'GetName'
     if (bp.GetName() != defaultPlayer.GetName()) {
            ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:58:39: error: 'class BaseBallPlayer' has no member named 'GetName'
     if (bp.GetName() != defaultPlayer.GetName()) {
                                       ^~~~~~~
C:\Users\tommy\OneDrive\Desktop\Exam_1/source/BaseBallTest.cpp:59:76: error: 'class BaseBallPlayer' has no member named 'GetName'
         cout << "GetPlayerAtPosition with invalid position failed: " << bp.GetName() << endl;
                                                                            ^~~~~~~
The terminal process terminated with exit code: 1
