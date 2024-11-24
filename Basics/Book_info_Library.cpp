#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;

public:
    // Constructor to initialize the book attributes
    Book(string t, string a, int year) : title(t), author(a), publicationYear(year) {
        cout << "Book Created: " << title << endl;
        cout << "Book author: " << author << endl;
    }

    ~Book() {
        cout << "Destruction of Book: " << title << endl;
    }
};

int main() 
{
    string title, author;
    int year;

    getline(cin, title);
    getline(cin, author);

    cin >> year;

    Book book(title, author, year);

    return 0;
}