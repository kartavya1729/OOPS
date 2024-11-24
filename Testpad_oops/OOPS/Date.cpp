#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;

    // Array to store the number of days in each month
    const int daysInMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

public:
    // Constructor to initialize the Date object
    Date(int m, int d) 
    {
        if (m < 1 || m > 12 || d < 1 || d > daysInMonths[m - 1]) 
        {
            throw invalid_argument("Invalid month or day");
        }
        month = m;
        day = d;
    }

    int daysInMonth() const {
        return daysInMonths[month - 1];
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    // Advances to the next day
    void nextDay() {
        day++;
        if (day > daysInMonth()) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1; // Wrap around to January
            }
        }
    }

    // Returns a string representation of the date
    string toString() const {
        return to_string(month) + "/" + to_string(day);
    }

    // Returns the absolute day of the year
    int absoluteDay() const {
        int absDay = 0;
        for (int i = 0; i < month - 1; i++) {
            absDay += daysInMonths[i];
        }
        absDay += day;
        return absDay;
    }
};

int main() {
    try {
        Date date(6, 27); // June 27
        cout << "Date: " << date.toString() << endl; // Output: 6/27
        cout << "Days in month: " << date.daysInMonth() << endl; // Output: 30
        cout << "Day: " << date.getDay() << endl; // Output: 27
        cout << "Month: " << date.getMonth() << endl; // Output: 6
        cout << "Absolute day: " << date.absoluteDay() << endl; // Output: 178

        date.nextDay(); // Advance to the next day
        cout << "Next date: " << date.toString() << endl; // Output: 6/28

        // Test wrapping to the next month
        Date endOfMonth(6, 30);
        endOfMonth.nextDay();
        cout << "Next date (wrap to next month): " << endOfMonth.toString() << endl; // Output: 7/1

        // Test wrapping to the next year
        Date endOfYear(12, 31);
        endOfYear.nextDay();
        cout << "Next date (wrap to next year): " << endOfYear.toString() << endl; // Output: 1/1

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}