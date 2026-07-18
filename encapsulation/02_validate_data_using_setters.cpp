#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) {
        if (n != "") {
            name = n;
        } else {
            cout << "Invalid Name!" << endl;
        }
    }

    void setAge(int a) {
        if (a > 0 && a <= 100) {
            age = a;
        } else {
            cout << "Invalid Age!" << endl;
        }
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s1;

    s1.setName("Ali");
    s1.setAge(20);

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;

    s1.setName("");
    s1.setAge(-5);

    return 0;
}
