#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // 1. Default constructor
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    // 2. Constructor with default arguments
    Book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    // 3. Copy constructor
    Book(const Book &other) {
        title = other.title;
        author = other.author;
        price = other.price;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Book book1;  // default constructor
    book1.display();

    Book book2("1984", "George Orwell", 9.99);  // full details
    book2.display();

    Book book3(book2);  // copy constructor
    book3.display();

    Book book4("Mystery Bestseller");  // title only
    book4.display();

    Book book5("The C++ Chronicles", "Bjarne Jr.");  // title + author
    book5.display();

    return 0;
}
