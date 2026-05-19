#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Constructor with one parameter
    Student(string n) {
        name = n;
        age = 0;
    }

    // Constructor with two parameters
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1; 
    Student s2("Zakir");
    Student s3("Ali", 20);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
