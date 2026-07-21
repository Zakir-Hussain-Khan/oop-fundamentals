#include <iostream>
using namespace std;

class Student {
private:
    const int id;
    const string name;

public:
    Student(int i, string n) : id(i), name(n) {}
    
    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }
};

int main() {
    Student s1(101, "Ali");

    cout << "ID: " << s1.getId() << endl;
    cout << "Name: " << s1.getName() << endl;

    return 0;
}
