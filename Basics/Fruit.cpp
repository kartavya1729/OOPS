#include <iostream>
using namespace std;

class Fruit {
protected:
    int totalFruits;

public:
    // Constructor to initialize totalFruits to 0
    Fruit() : totalFruits(0) {}

    virtual void displayTotalFruits() const 
    {
        cout << "Total number of fruits in the basket: " << totalFruits << endl;
    }

    virtual ~Fruit() {}
};


class Apples : public Fruit {
private:
    int numApples;

public:
    Apples(int apples) 
    {
        numApples = apples;
        totalFruits += numApples; // Add apples to the total fruits
    }

    void displayApples() const 
    {
        cout << "Number of apples in the basket: " << numApples << endl;
    }

    void displayTotalFruits() const override 
    {
        Fruit::displayTotalFruits(); // Call base class function
    }
};


class Mangoes : public Fruit 
{
private:
    int numMangoes;

public:
    Mangoes(int mangoes) 
    {
        numMangoes = mangoes;
        totalFruits += numMangoes; // Add mangoes to the total fruits
    }

    void displayMangoes() const 
    {
        cout << "Number of mangoes in the basket: " << numMangoes << endl;
    }

    void displayTotalFruits() const override 
    {
        Fruit::displayTotalFruits(); // Call base class function
    }
};

int main() 
{
    int apples, mangoes;

    cout << "Enter the number of apples in the basket: ";
    cin >> apples;

    cout << "Enter the number of mangoes in the basket: ";
    cin >> mangoes;

    // Create objects for Apples and Mangoes
    Apples appleBasket(apples);
    Mangoes mangoBasket(mangoes);

    appleBasket.displayApples();
    mangoBasket.displayMangoes();
    appleBasket.displayTotalFruits(); // Total fruits displayed by the Apples object

    return 0;
}