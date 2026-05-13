#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:

    Student() {
        name = "Unknown";
        rollNo = 0;
        marks = 0.0;
    }


    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    Student s2("Ali", 101, 85.5);
    s2.display();

    return 0;
}
