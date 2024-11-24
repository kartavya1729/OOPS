#include <iostream>
using namespace std;

class Time 
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Overload + operator
    Time operator+(const Time& other) const 
    {
        int totalSeconds = seconds + other.seconds + 60 * (minutes + other.minutes) + 3600 * (hours + other.hours);
        int newHours = totalSeconds / 3600;
        int newMinutes = (totalSeconds % 3600) / 60;
        int newSeconds = totalSeconds % 60;

        return Time(newHours, newMinutes, newSeconds);
    }

    // Display time
    void display() const 
    {
        cout << hours << " " << minutes << " " << seconds;
    }
};

int main() 
{
    // Input
    int h1, m1, s1, h2, m2, s2;
    
    cout << "Enter the first time (hours minutes seconds): ";
    cin >> h1 >> m1 >> s1;

    cout << "Enter the second time (hours minutes seconds): ";
    cin >> h2 >> m2 >> s2;

    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);

    Time result = time1 + time2;

    cout << "Addition of two times: ";
    result.display();
    cout << endl;

    return 0;
}
