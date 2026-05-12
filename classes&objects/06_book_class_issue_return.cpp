#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    bool isIssued;   

public:

    Book(string t, string a) {
        title = t;
        author = a;
        isIssued = false; 
    }


    void issueBook() {
        if (!isIssued) {
            isIssued = true;
            cout << "Book issued successfully." << endl;
        } else {
            cout << "Book is already issued." << endl;
        }
    }


    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << "Book returned successfully." << endl;
        } else {
            cout << "Book was not issued." << endl;
        }
    }

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Book b1("The Alchemist", "Paulo Coelho");

    b1.displayInfo();
    cout << endl;

    b1.issueBook();
    b1.displayInfo();
    cout << endl;

    b1.returnBook();
    b1.displayInfo();

    return 0;
}
