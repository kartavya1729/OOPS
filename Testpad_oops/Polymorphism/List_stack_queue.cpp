#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// Abstract base class
class List {
public:
    virtual void store(int value) = 0;    // Pure virtual function to store a value
    virtual void retrieve() = 0;           // Pure virtual function to retrieve a value
    virtual ~List() {}                      // Virtual destructor for proper cleanup
};


class Stack : public List {
private:
    stack<int> s;

public:
    void store(int value) override {
        s.push(value);
    }

    void retrieve() override {
        if (!s.empty()) {
            cout << s.top() << endl;
            s.pop();
        }
    }
};



class Queue : public List {
private:
    queue<int> q;

public:
    void store(int value) override {
        q.push(value);
    }

    void retrieve() override {
        if (!q.empty()) {
            cout << q.front() << endl;
            q.pop();
        }
    }
};


int main() 
{
    int containerType;  // To choose Stack (1) or Queue (2)

    cin >> containerType;

    List* container = nullptr;

    if (containerType == 1) 
    {
        container = new Stack();  // Create Stack object
    } 

    else if (containerType == 2) 
    {
        container = new Queue();  // Create Queue object
    }

    int action;  // 1 for store, 2 for retrieve

    int value;   // Value to store in container

    while (cin >> action) 
    {
        if (action == 1) 
        {
            cin >> value;
            container->store(value);
        } 
        else if (action == 2) 
        {
            container->retrieve();
        }
    }

    delete container;
    return 0;
}