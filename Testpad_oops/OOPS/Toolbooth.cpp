#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalCars;
    int totalCash;

public:
    // Constructor to initialize totalCars and totalCash to 0
    TollBooth() : totalCars(0), totalCash(0) {}

    void payingCar() 
    {
        totalCars++;
        totalCash += 50;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() const 
    {
        cout << "Total Cash : " << totalCash << "/-" << endl;

        cout << "Total Cars : " << totalCars << endl;
    }
};

int main() 
{
    TollBooth tb;

    char input;

    cout << "Enter 'p' for paying car, 'n' for non-paying car, or 'q' to quit and display totals." << endl;

    while (true) 
    {
        cin >> input;

        if (input == 'p') 
        {
            tb.payingCar();
        } 

        else if (input == 'n') 
        {
            tb.nopayCar();
        } 

        else if (input == 'q') 
        {
            tb.display();
            break;
        } 

        else 
        {
            cout << "Invalid input. Please enter 'p', 'n', or 'q'." << endl;
        }
    }
    return 0;
}