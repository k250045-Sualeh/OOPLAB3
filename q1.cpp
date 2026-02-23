#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    Book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

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
    Book book1; 
    book1.display();

    Book book2("1984", "George Orwell", 9.99);
    book2.display();

    Book book3(book2);  
    book3.display();

    Book book4("Mystery Bestseller"); 
    book4.display();

    Book book5("The C++ Chronicles", "Bjarne Jr.");
    book5.display()

    return 0;
}

