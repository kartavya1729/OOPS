// 8. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
// Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;

class Date {
private:
    int day;   
    int month;
    int year;  

    bool isLeapYear(int year) const 
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int daysInMonth(int month, int year) const 
    {
        switch (month) 
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;

            case 4: case 6: case 9: case 11:
                return 30;

            case 2:
                return isLeapYear(year) ? 29 : 28;

            default:
                return 0; // Invalid month
        }
    }

public:
    Date(int d = 1, int m = 1, int y = 2000) 
    {
        setDate(d, m, y);
    }

    void setDate(int d, int m, int y) 
    {
        if (isValidDate(d, m, y)) 
        {
            day = d;
            month = m;
            year = y;
        } 
        else 
        {
            cerr << "Invalid date. Setting to default (1/1/2000)." << endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValidDate(int d, int m, int y) const 
    {
        if (y < 1 || m < 1 || m > 12 || d < 1 || d > daysInMonth(m, y)) 
        {
            return false;
        }
        return true;
    }

    void display() const 
    {
        cout << (day < 10 ? "0" : "") << day << "/" << (month < 10 ? "0" : "") << month << "/" << year << endl;
    }
};


int main() 
{
    Date d1(29, 2, 2020); // Valid leap year date
    d1.display();

    Date d2(31, 4, 2023); // Invalid date
    d2.display();

    Date d3; // Default date
    d3.display();

    cout << "\nSetting a new valid date (15/8/2021)...\n";
    d3.setDate(15, 8, 2021);
    d3.display();

    cout << "\nSetting an invalid date (32/13/2023)...\n";
    d3.setDate(32, 13, 2023);
    d3.display();

    return 0;
}