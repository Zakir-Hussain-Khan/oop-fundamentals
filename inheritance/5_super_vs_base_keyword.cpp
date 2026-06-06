#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        Base::show();
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Derived d;
    d.show();
}
