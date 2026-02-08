#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;
 
    void initializeDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
    }

public:
    // Default constructor
    WeekDays() {
        initializeDays();
        CurrentDay = 0; // Sunday by default
    }

    // Parameterized constructor
    WeekDays(int day) {
        initializeDays();
        CurrentDay = day % 7;  // keep within 0–6
    }

   
    string getCurrentDay() {
        return Days[CurrentDay];
    }

    string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }

   
    string getPreviousDay() {
        return Days[(CurrentDay + 6) % 7]; // avoids negative index
    }

    string getNthDayFromToday(int N) {
        return Days[(CurrentDay + N) % 7];
    }
};

int main() {

    WeekDays today(1); 

    cout << "Current Day: " << today.getCurrentDay() << endl;
    cout << "Next Day   : " << today.getNextDay() << endl;
    cout << "Previous Day: " << today.getPreviousDay() << endl;
    cout << "Day after 20 days: " << today.getNthDayFromToday(20) << endl;

    return 0;
}