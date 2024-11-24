#include <iostream>
using namespace std;

class Mammals 
{
public:
    void printMammal() 
    {
        cout << "I am a mammal" << endl;
    }
};


class MarineAnimals 
{
public:
    void printMarineAnimal() 
    {
        cout << "I am a marine animal" << endl;
    }
};


class BlueWhale : public Mammals, public MarineAnimals {
public:
    void printBlueWhale() 
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main() 
{
    Mammals m;
    MarineAnimals mA;
    BlueWhale bW;


    cout << "Mammals class function called by mammal object: ";
    m.printMammal();


    cout << "MarineAnimals class function called by marineAnimal object: ";
    mA.printMarineAnimal();


    cout << "BlueWhale class function called by blueWhale object: ";
    bW.printBlueWhale();


    cout << "Calling Mammals class function through BlueWhale object: ";
    bW.printMammal();


    cout << "Calling MarineAnimals class function through BlueWhale object: ";
    bW.printMarineAnimal();

    return 0;
}