#include <iostream>
#include <string>
using namespace std;

class FootballPlayer {
private:
    string playerName;
    string position;
    int goalCount;

public:
    // Default constructor
    FootballPlayer() {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    // Constructor with default arguments
    FootballPlayer(string name, string pos = "Midfielder", int goals = 10) {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    // Copy constructor
    FootballPlayer(const FootballPlayer &p) {
        playerName = p.playerName;
        position = p.position;
        goalCount = p.goalCount;
    }

    void scoreGoals(int goals) {
        goalCount += goals;
    }

    void displayProfile() {
        cout << "Player Name : " << playerName << endl;
        cout << "Position    : " << position << endl;
        cout << "Goals       : " << goalCount << endl;
        cout << "Status      : Ballon d'Or Contender" << endl;
        cout << "-------------------------------" << endl;
    }
};

int main() {

    FootballPlayer p1;                                
    FootballPlayer p2("Lionel Messi", "Forward", 820); 
    FootballPlayer p3(p2);                             
    FootballPlayer p4("Neymar jr");                   

    p1.scoreGoals(3);
    p2.scoreGoals(5);
    p3.scoreGoals(2);
    p4.scoreGoals(7);

    cout << " Football Player Profiles " << endl << endl;
    p1.displayProfile();
    p2.displayProfile();
    p3.displayProfile();
    p4.displayProfile();

    return 0;
}
