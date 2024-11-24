//  Q5 A scientist is developing a time travel machine. Create a class TimeMachine with attributes for the year and month. 
// Overload the ++ operator to advance the time by one month and the-- operator to go back in time by one month.
//  Test Case:
//  Input: Year = 2023, Month = May
//  Output: Time advanced to June 2023 using ++ operator and then back to May using-- operator.

#include <iostream>
#include <string>
using namespace std;

class TimeMachine 
{
private:
    int year;
    string month;

    // Helper function to get the next month and adjust the year if necessary
    void nextMonth() 
    {
        static const string months[] = 
        {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        int index = monthIndex();

        index = (index + 1) % 12;  // Advance to the next month
        if (index == 0) 
        {
            year++;  // Move to the next year
        }
        month = months[index];
    }

    // Helper function to get the previous month and adjust the year if necessary
    void previousMonth() 
    {
        static const string months[] = 
        {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        int index = monthIndex();
        index = (index - 1 + 12) % 12;  // Go back to the previous month

        if (index == 11) 
        {
            year--;  // Move to the previous year
        }
        month = months[index];
    }

    // Helper function to get the index of the current month
    int monthIndex() const 
    {
        static const string months[] = 
        {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };
        for (int i = 0; i < 12; ++i) 
        {
            if (month == months[i]) 
            {
                return i;
            }
        }
        return -1;  // Should never happen if month is valid
    }

public:
    // Constructor to initialize the year and month
    TimeMachine(int y, std::string m) : year(y), month(m) {}

    // Overload the prefix ++ operator to advance the time by one month
    TimeMachine& operator++() {
        nextMonth();
        return *this;
    }

    // Overload the prefix -- operator to go back in time by one month
    TimeMachine& operator--() {
        previousMonth();
        return *this;
    }

    // Display the current time
    void display() const 
    {
        cout << "Current Time: " << month << " " << year << endl;
    }
};

int main() 
{
    TimeMachine timeMachine(2023, "May");

    cout << "Initial Time:" << endl;
    timeMachine.display();

    cout << "\nAdvancing Time:" << endl;
    ++timeMachine;  // Advance time by one month
    timeMachine.display();

    cout << "\nRewinding Time:" << endl;
    --timeMachine;  // Go back in time by one month
    timeMachine.display();

    return 0;
}