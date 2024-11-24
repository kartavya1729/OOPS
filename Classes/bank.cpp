// 5. Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. 
// Include member functions to deposit and withdraw money from the account.

#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
private:
    string accountNumber;
    double balance; 

public:
    BankAccount(const string& accNum, double initialBalance) 
    {
        accountNumber = accNum;

        if (initialBalance < 0) 
        {
            cerr << "Initial balance cannot be negative. Setting balance to 0." << endl;
            balance = 0;
        } 
        else 
        {
            balance = initialBalance;
        }
    }

    string getAccountNumber() const 
    {
        return accountNumber;
    }

    double getBalance() const 
    {
        return balance;
    }

    void deposit(double amount) 
    {
        if (amount <= 0) 
        {
            cerr << "Deposit amount must be positive." << endl;
        } 
        else 
        {
            balance += amount;
            cout << "Successfully deposited: $" << amount << "\n";
        }
    }

    void withdraw(double amount) 
    {
        if (amount <= 0) 
        {
            cerr << "Withdrawal amount must be positive." << endl;
        } 
        else if (amount > balance) 
        {
            cerr << "Insufficient balance. Withdrawal failed." << endl;
        } 
        else 
        {
            balance -= amount;
            cout << "Successfully withdrew: $" << amount << "\n";
        }
    }

    void display() const 
    {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Current Balance: $" << balance << "\n";
    }
};

int main() 
{
    BankAccount acc1("123456789", 500.0);

    acc1.display();

    cout << "\nDepositing $200...\n";
    acc1.deposit(200);
    acc1.display();


    cout << "\nWithdrawing $100...\n";
    acc1.withdraw(100);
    acc1.display();

    // Test insufficient balance
    cout << "\nAttempting to withdraw $700...\n";
    acc1.withdraw(700);


    // Test invalid deposit and withdrawal amounts
    cout << "\nAttempting to deposit -$50...\n";
    acc1.deposit(-50);

    cout << "\nAttempting to withdraw -$30...\n";
    acc1.withdraw(-30);

    return 0;
}
