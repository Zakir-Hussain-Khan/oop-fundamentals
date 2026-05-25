#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void setStudent(int r) {
        rollNo = r;
    }

    void displayStudent() {
        displayPerson(); // inherited function
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.setPerson("Zakir", 20);
    s.setStudent(101); 
    s.displayStudent();


    return 0;
}
