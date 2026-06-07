#include <iostream>
using namespace std;

class Base {
protected:
    int value;   

public:
    Base() {
        value = 10;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Value is: " << value << endl;
    }
};

int main() {
    Derived d;
    d.show();

 
}
