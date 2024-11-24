#include <iostream>
using namespace std;

class Student 
{
  private:
    string name;
    int age;     

  public:
    void setName(string stuName) 
    {
        name = stuName;
    }

    string getName() {    // Getter for name
        return name;
    }

    // Setter for age
    void setAge(int stuAge) 
    {
        if (stuAge > 0) 
        { // Validation
            age = stuAge;
        } 
        else 
        {
            cout << "Invalid age!" << endl;
        }
    }

    int getAge() {    // Getter for age
        return age;
    }
};

int main() 
{
    Student s;

    // Setting values using setters
    s.setName("John");
    s.setAge(20);

    // Accessing values using getters
    cout << "Student Name: " << s.getName() << endl;
    cout << "Student Age: " << s.getAge() << endl;

    return 0;
}