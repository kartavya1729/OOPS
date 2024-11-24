/* Automating Product Cost Calculation in a Grocery Store , Nathan was a student in the morning and a computer nerd at night.

In the earlier stages of his career, he was in need of money. So, he started working in a grocery store. In the grocery store, he needed to automate the task of calculating the total cost of a product based on its price per unit and the quantity purchased by the customer.

Help Nathan in framing the code for his work

Constraint: 10.00 ≤ price ≤ 500.00 • 1 s quantity ≤ 500

Input Format: The input consists of two space-separated values: price (integer) and quantity (integer).

Output Format The output represents the total cost of the product.*/

#include <iostream>
using namespace std;

int main() 
{
    int price, quantity;
    
    cout << "Enter the price per unit: ";
    cin >> price;
    
    cout << "Enter the quantity purchased: ";
    cin >> quantity;
    
    // Check if price and quantity are within constraints
    if (price < 10 || price > 500 || quantity < 1 || quantity > 500) 
    {
        cout << "Invalid input. Price should be between 10 and 500, and quantity should be between 1 and 500." << endl;
    } 
    
    else 
    {
        int total_cost = price * quantity;
        
        cout << "Total cost: " << total_cost << endl;
    }
    
    return 0;
}
