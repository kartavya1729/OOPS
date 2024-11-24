// Generate bill on the basis of Item price and quantity i.e. Bill = price of item * quantity
// Calculates cash from notes of Rs 2000, Rs 500, Rs 100, Rs 50, and Rs 10.
// Match cash against bill and display “Clear” message if no balance was there otherwise print the amount needs to pay.
// Develop two classes Bill and Cash, where Cash inherits Bill. Sample input and output are shown below:

// Sample Input 1:
// 1000    //item_price
// 100      //qty
// 4        //notes of 2000
// 0        //notes of 500
// 0        //notes of 100
// 0        //notes of 50
// 10       //notes of 10

// Sample Output 1:
// Need to pay: 91900
// Constraints: notes should be of Rs 2000, Rs 500, Rs 100, Rs 50, and Rs 10. 

#include <iostream>
using namespace std;

class Bill 
{
protected:
    int item_price;
    int quantity;
    long long bill_amount;

public:
    void calculate_bill(int price, int qty) 
    {
        item_price = price;
        quantity = qty;
        bill_amount = static_cast<long long>(item_price) * quantity;
    }
};


class Cash : public Bill 
{
private:
    int notes_2000, notes_500, notes_100, notes_50, notes_10;
    long long total_cash;

public:
    void get_cash() 
    {
        cin >> notes_2000 >> notes_500 >> notes_100 >> notes_50 >> notes_10;

        total_cash = (notes_2000 * 2000LL) + (notes_500 * 500LL) + (notes_100 * 100LL) + (notes_50 * 50LL) + (notes_10 * 10LL);
    }

    void display() 
    {
        if (total_cash >= bill_amount) 
        {
            cout << "Clear" << endl;
        } 

        else 
        {
            cout << "Need to pay: " << (bill_amount - total_cash) << endl;
        }
    }
};


int main() 
{
    Cash payment;

    int price, qty;
    cin >> price >> qty;

    payment.calculate_bill(price, qty);

    payment.get_cash();

    payment.display();

    return 0;
}