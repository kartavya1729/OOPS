// 7. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
// Include member functions to calculate and set salary based on employee performance.

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;       
    int employeeID;    
    double salary;    

public:
    Employee(const string& empName, int empID, double baseSalary) 
    {
        name = empName;
        employeeID = empID;
        salary = (baseSalary >= 0) ? baseSalary : 0; // Ensure non-negative salary
    }

    string getName() const 
    {
        return name;
    }

    int getEmployeeID() const 
    {
        return employeeID;
    }

    double getSalary() const 
    {
        return salary;
    }

    void setSalaryBasedOnPerformance(char performanceRating) 
    {
        switch (performanceRating) 
        {
        case 'A':
            salary *= 1.20;
            cout << "Excellent performance! Salary increased by 20%.\n";
            break;

        case 'B':
            salary *= 1.10;
            cout << "Good performance! Salary increased by 10%.\n";
            break;

        case 'C':
            salary *= 1.05;
            cout << "Average performance! Salary increased by 5%.\n";
            break;

        case 'D':
            cout << "Below average performance. No salary increase.\n";
            break;

        case 'F':
            salary *= 0.90; // 10% decrease for poor performance
            cout << "Poor performance! Salary decreased by 10%.\n";
            break;

        default:
            cerr << "Invalid performance rating. No changes to salary.\n";
        }
    }

    void display() const 
    {
        cout << "Employee Name: " << name << "\n";
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Current Salary: $" << salary << "\n";
    }
};

int main() 
{
    Employee emp1("John Doe", 101, 50000);
    emp1.display();

    cout << "\nUpdating salary based on performance (Rating: A)...\n";
    emp1.setSalaryBasedOnPerformance('A');
    emp1.display();

    cout << "\nUpdating salary based on performance (Rating: F)...\n";
    emp1.setSalaryBasedOnPerformance('F');
    emp1.display();


    cout << "\nUpdating salary with invalid performance rating...\n";
    emp1.setSalaryBasedOnPerformance('X');
    emp1.display();

    return 0;
}
