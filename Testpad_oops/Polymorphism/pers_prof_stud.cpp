#include <iostream>
#include <string>
#include <numeric> // for std::accumulate
using namespace std;

class Person {
protected:
    int age;

public:
    virtual void getdata() = 0; // Pure virtual function
    virtual void putdata() = 0; // Pure virtual function
    virtual ~Person() {}       // Virtual destructor
};



class Professor : public Person {
private:
    int publications;
    int cur_id;
    static int id_counter;

public:
    Professor() {
        cur_id = ++id_counter;
    }

    void getdata() override {
        cin >> age >> publications;
    }

    void putdata() override {
        cout << age << " " << publications << " " << cur_id << endl;
    }
};

// Initialize static variable for Professor
int Professor::id_counter = 0;



class Student : public Person 
{
private:
    int marks[6];
    int cur_id;
    static int id_counter;

public:
    Student() 
    {
        cur_id = ++id_counter;
    }

    void getdata() override 
    {
        cin >> age;
        for (int i = 0; i < 6; ++i) 
        {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum_marks = accumulate(marks, marks + 6, 0);
        cout << age << " " << sum_marks << " " << cur_id << endl;
    }
};

// Initialize static variable for Student
int Student::id_counter = 0;

int main() 
{
    int n;
    cin >> n;

    Person* persons[n];

    for (int i = 0; i < n; ++i) 
    {
        int type;
        cin >> type;

        if (type == 1) {
            persons[i] = new Professor();
        } 

        else {
            persons[i] = new Student();
        }
        persons[i]->getdata();
    }

    for (int i = 0; i < n; ++i) 
    {
        persons[i]->putdata();

        delete persons[i];
    }
    return 0;
}