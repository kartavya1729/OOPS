//  Q4 In a wizardry school, students are learning to use magical wands. Design a class MagicWand with attributes like the wand's core material and length.
//  Overload the + operator to combine two wands, creating a more powerful wand with a longer length.
//  Test Case:
//  Input: Wand1- Core Material = "Phoenix Feather", Length = 10 inches
//  Wand2- Core Material = "Dragon Heartstring", Length = 8 inches
//  Output: A combined wand with core material "Phoenix Feather" and length 18 inches.

#include <iostream>
#include <string>
using namespace std;

class MagicWand {
private:
    string coreMaterial;
    int length;

public:
    MagicWand(string core, int len) : coreMaterial(core), length(len) {}

    MagicWand operator+(const MagicWand& other) const 
    {
        int combinedLength = this->length + other.length;

        return MagicWand(this->coreMaterial, combinedLength);
    }

    void display() const 
    {
        cout << "Wand Core Material: " << coreMaterial << ", Length: " << length << " inches" << endl;
    }
};

int main() 
{
    MagicWand w1("Phoenix Feather", 10);
    MagicWand w2("Dragon Heartstring", 8);

    cout << "Wand 1 Details:" << endl;
    w1.display();

    cout << "Wand 2 Details:" << endl;
    w2.display();

    MagicWand combinedWand = w1 + w2;

    cout << "\nCombined Wand Details:" << endl;
    combinedWand.display();

    return 0;
}
