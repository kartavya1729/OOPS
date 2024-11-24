// Imagine a publishing company that markets both Book and CD's of its works. 
// A class Publication is created that stores the title (a string) and price (type int) of a publication. 

// From this class derive two classes:
// Book, which adds a page count and author, and a constructor having title, price, pages & writer as parameters.
// CD, which adds a playing time in minutes, and a constructor having title, price & length as parameters.
// Each of these two classes should have a putdata() function to display its data as shown in sample output.

// Sample Input
// Programming-In-C		// Title of Book
// 150				// Price of Book
// 1025				// Pages of Book
// Schildt				// Writer of Book
// Rock-On			// Title of CD
// 50				// Price of CD
// 185					// Length of CD
// Sample Output

// Book Title "Programming-In-C", written by "Schildt" has 1025 pages and of 150 rupees.
// CD Title "Rock-On", is of 185 minutes length and of 50 rupees.


#include <iostream>
#include <string>
using namespace std;


class Publication 
{
protected:
    string title;
    int price;

public:
    Publication(string t, int p) : title(t), price(p) {}

    virtual void putdata() const = 0;
};


class Book : public Publication 
{
private:
    int pages;
    string author;

public:
    Book(string t, int p, int pg, string writer) : Publication(t, p), pages(pg), author(writer) {}

    void putdata() const override 
    {
        cout << "Book Title \"" << title << "\", written by \"" << author << "\" has " << pages << " pages and of " << price << " rupees." << endl;
    }
};


class CD : public Publication 
{
private:
    int length;

public:
    CD(string t, int p, int len) : Publication(t, p), length(len) {}

    void putdata() const override 
    {
        cout << "CD Title \"" << title << "\", is of " << length << " minutes length and of " << price << " rupees." << endl;
    }
};


int main() 
{
    Book book("Programming-In-C", 150, 1025, "Schildt");

    CD cd("Rock-On", 50, 185);

    book.putdata();
    cd.putdata();

    return 0;
}