#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Overload + operator to add two Time objects
    Time operator+(const Time& t) {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        result.hours %= 24; // Optional: If we want time to roll over a 24-hour clock
        return result;
    }

    void display() const 
    {
        cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};

int main() 
{
    int h1, m1, s1, h2, m2, s2;
    
    cin >> h1 >> m1 >> s1;
    
    cin >> h2 >> m2 >> s2;
    
    // Create two Time objects
    Time t1(h1, m1, s1);
    Time t2(h2, m2, s2);
    
    Time t3 = t1 + t2;
    t3.display();

    return 0;
}