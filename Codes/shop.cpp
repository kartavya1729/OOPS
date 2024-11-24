// Q1: You are developing a shopping cart application in C++ for an online store. Each item in the shopping cart is represented by the CartItem class. 
// You need to implement operator overloading to facilitate the calculation of the total cost of items in the shopping cart.
//  Test Case 1:
//  Input:
//  Item 1: Name- "Laptop", Price- ₹1200.0, Quantity- 2
//  Item 2: Name- "Smartphone", Price- ₹600.0, Quantity- 3
//  Expected Output: Total Cost: ₹4200.0

//  Test Case 2:
//  Input:
//  Item 1: Name- "Headphones", Price- ₹80.0, Quantity- 1
//  Item 2: Name- "Smartwatch", Price- ₹150.0, Quantity- 2
//  Expected Output: Total Cost: ₹380.0

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CartItem 
{
private:
    string name;
    double price;
    int quantity;

public:
    CartItem(string itemName, double itemPrice, int itemQuantity) : name(itemName), price(itemPrice), quantity(itemQuantity) {}

    double getTotalCost() const 
    {
        return price * quantity;
    }

    friend double operator+(const CartItem& item1, const CartItem& item2) 
    {
        return item1.getTotalCost() + item2.getTotalCost();
    }

    friend double operator+(double total, const CartItem& item) 
    {
        return total + item.getTotalCost();
    }
};

int main() 
{
    CartItem item1("Laptop", 1200.0, 2);
    CartItem item2("Smartphone", 600.0, 3);

    double totalCost = item1 + item2;
    cout << "Total Cost: ₹" << totalCost << endl;

    CartItem item3("Headphones", 80.0, 1);
    CartItem item4("Smartwatch", 150.0, 2);

    totalCost = item3 + item4;
    cout << "Total Cost: ₹" << totalCost << endl;

    return 0;
}