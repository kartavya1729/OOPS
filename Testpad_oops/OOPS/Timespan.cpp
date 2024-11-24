#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class TimeSpan {
private:
    int hours;
    int minutes;

    // Normalize the time span so minutes are in range 0-59
    void normalize() {
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

public:
    TimeSpan(int hours, int minutes) {
        this->hours = hours;
        this->minutes = minutes;
        normalize();
    }

    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    // Method to add hours and minutes to the current time span
    void add(int hours, int minutes) {
        this->hours += hours;
        this->minutes += minutes;
        normalize();
    }

    // Method to add another TimeSpan object
    void add(const TimeSpan& tp) {
        this->hours += tp.hours;
        this->minutes += tp.minutes;
        normalize();
    }

    double getTotalHours() const {
        return hours + (minutes / 60.0);
    }

    // Method to return a string representation of the time span
    string toString() const {
        return to_string(hours) + " Hours, " + to_string(minutes) + " Minutes";
    }
};

int main() 
{
    TimeSpan ts1(3, 75);  // Creates a time span of 3 hours, 75 minutes (normalized to 4 hours, 15 minutes)

    cout << ts1.toString() << endl; // Output: 4 Hours, 15 Minutes

    ts1.add(2, 50);  // Add 2 hours, 50 minutes

    cout << ts1.toString() << endl; // Output: 7 Hours, 5 Minutes

    TimeSpan ts2(1, 45); // Another time span

    ts1.add(ts2);  // Add ts2 to ts1
    
    cout << ts1.toString() << endl; // Output: 8 Hours, 50 Minutes

    cout << "Total hours: " << fixed << setprecision(2) << ts1.getTotalHours() << endl; // Output: 8.83

    return 0;
}
