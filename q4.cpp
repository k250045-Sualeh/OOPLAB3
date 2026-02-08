#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
private:
    string name;
    int jerseyNumber;
    double battingAverage;
    int matches;

public:
   
    CricketPlayer(string name, int jerseyNumber, double battingAverage) {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
        this->matches = 1; 
    }

    CricketPlayer& improveAverage(int runs) {
        battingAverage = (battingAverage * matches + runs) / (matches + 1);
        matches++;
        return *this;
    }

    void playMatch(int runsScored) {
        battingAverage = (battingAverage * matches + runsScored) / (matches + 1);
        matches++;
    }

    // Display player stats
    void displayPlayerStats() {
        cout << "Player Name     : " << name << endl;
        cout << "Jersey Number   : " << jerseyNumber << endl;
        cout << "Batting Average : " << battingAverage << endl;
        cout << "Commentary      : This batting average is more consistent than Karachi’s weather!"
             << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {

    CricketPlayer babar("Babar Azam", 56, 48.5);
    CricketPlayer rizwan("Muhammad Rizwan", 16, 46.2);
    CricketPlayer saim("Saim Ayub", 63, 32.8);

    babar.playMatch(102);
    babar.improveAverage(88).improveAverage(75);

    rizwan.playMatch(64);
    rizwan.improveAverage(91);

    saim.playMatch(12);   
    saim.improveAverage(67);


    cout << " Player Statistics " << endl << endl;
    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();

    return 0;
}