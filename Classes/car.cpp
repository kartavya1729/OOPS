// 4. Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
// Implement member functions to get and set these variables.

#include <iostream>
#include <string>
using namespace std;

class Car 
{
private:
    string company;
    string model; 
    int year; 

public:
    Car() : company("Unknown"), model("Unknown"), year(0) {}


    Car(const string& c, const string& m, int y) 
    {
        setCompany(c);
        setModel(m);
        setYear(y);
    }


    void setCompany(const string& c) 
    {
        company = c;
    }


    string getCompany() const 
    {
        return company;
    }


    void setModel(const string& m) 
    {
        model = m;
    }


    string getModel() const 
    {
        return model;
    }


    void setYear(int y) 
    {
        if (y < 1886 || y > 2100) 
        {
            cerr << "Invalid year. Setting year to 0." << endl;
            year = 0;
        } 

        else 
        {
            year = y;
        }
    }


    int getYear() const 
    {
        return year;
    }


    void display() const 
    {
        cout << "Car Details:\n";
        cout << "Company: " << company << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << "\n";
    }
};



int main() 
{
    Car c1;
    c1.display();

    cout << "\nSetting values for car1...\n";
    c1.setCompany("Toyota");
    c1.setModel("Corolla");
    c1.setYear(2020);
    c1.display();

    Car c2("Tesla", "Model S", 2022);
    cout << "\nDetails of car2:\n";
    c2.display();

    cout << "\nTesting invalid year input...\n";
    c2.setYear(1800); // Invalid year
    c2.display();

    return 0;
}
