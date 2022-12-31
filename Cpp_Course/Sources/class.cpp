#include <iostream>
using namespace std;

class Book { // Our class / template
    public:
        string title;
        string author;
        int pages;
};

int main(){

    Book book1; // Our Object
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2; // Our Object
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << "The book " << book1.title << " was written by " << book1.author << " and it has " << book1.pages << "." << endl;
    cout << "The book " << book2.title << " was written by " << book2.author << " and it has " << book2.pages << "." << endl;

    return 0;
}