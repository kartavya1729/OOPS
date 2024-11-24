// 9. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
// Include member functions to calculate the grade based on the marks and display the student's information.

#include <iostream>
#include <string>
using namespace std;

class Student 
{
private:
    string name;     
    string className; 
    int rollNumber;   
    double marks;   

public:
    Student(const string& studentName, const string& classN, int rollNo, double mark) 
    {
        name = studentName;
        className = classN;
        rollNumber = rollNo;
        marks = (mark >= 0 && mark <= 100) ? mark : 0;
    }

    void setName(const string& studentName) 
    {
        name = studentName;
    }

    void setClassName(const string& classN) 
    {
        className = classN;
    }

    void setRollNumber(int rollNo) 
    {
        rollNumber = rollNo;
    }

    void setMarks(double mark) 
    {
        if (mark >= 0 && mark <= 100) 
        {
            marks = mark;
        } 
        else {
            cerr << "Invalid marks. Must be between 0 and 100." << endl;
        }
    }

    string getName() const {
        return name;
    }

    string getClassName() const {
        return className;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    double getMarks() const {
        return marks;
    }

    char calculateGrade() const 
    {
        if (marks >= 90) return 'A';
        if (marks >= 80) return 'B';
        if (marks >= 70) return 'C';
        if (marks >= 60) return 'D';
        if (marks >= 50) return 'E';
        return 'F';
    }

    void display() const 
    {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    // Create Student objects and test
    Student s1("Alice Johnson", "10A", 101, 92);
    s1.display();

    cout << "\nCreating a second student...\n";
    Student s2("Bob Smith", "10B", 102, 76);
    s2.display();

    cout << "\nUpdating marks for Bob...\n";
    s2.setMarks(59);
    s2.display();

    cout << "\nSetting invalid marks...\n";
    s2.setMarks(105); // Invalid marks
    s2.display();

    return 0;
}