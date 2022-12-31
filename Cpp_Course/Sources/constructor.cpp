#include <iostream>
using namespace std;

class Book { // Our class / template
    public:
        string title;
        string author;
        int pages;

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main(){

    Book book1("Harry Potter","JK Rowling",500); // Our Object
    Book book2("Lord of the Rings","Tolkein",700); // Our Object
    Book book3;

    cout << "The book " << book1.title << " was written by " << book1.author << " and it has " << book1.pages << " pages." << endl;
    cout << "The book " << book2.title << " was written by " << book2.author << " and it has " << book2.pages << " pages." << endl;
    cout << "The book " << book3.title << " was written by " << book3.author << " and it has " << book3.pages << " pages." << endl;

    return 0;
}