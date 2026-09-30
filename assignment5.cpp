#include <iostream>
using namespace std;

class Book
{
    int bookId;
    string title;
    float price;

public:
    // Parameterized constructor
    Book(int id, string t, float p)
    {
        bookId = id;
        title = t;
        price = p;
    }

    // Copy constructor
    Book(const Book &b)
    {
        bookId = b.bookId;
        title = b.title;
        price = b.price;
    }

    // Display function
    void display()
    {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Destructor called for book: " << title << endl;
    }
};

int main()
{
    // Original object
    Book b1(101, "C++ Programming", 450.50);

    // Copied object using copy constructor
    Book b2 = b1;

    cout << "Original Book Details:" << endl;
    b1.display();

    cout << "\nCopied Book Details:" << endl;
    b2.display();

    return 0;
}