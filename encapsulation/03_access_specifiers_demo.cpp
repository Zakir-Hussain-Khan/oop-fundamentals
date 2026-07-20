#include <iostream>
using namespace std;

class Demo {
public:
    int publicVar;

private:
    int privateVar;

protected:
    int protectedVar;

public:
    Demo() {
        publicVar = 10;
        privateVar = 20;
        protectedVar = 30;
    }

    void showData() {
        cout << "Public Variable: " << publicVar << endl;
        cout << "Private Variable: " << privateVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
    }
};

class Child : public Demo {
public:
    void accessProtected() {
        cout << "Accessing Protected Variable in Child Class: "
             << protectedVar << endl;

    }
};

int main() {
    Demo d;

    d.publicVar = 100;
    cout << "Public Variable from main: " << d.publicVar << endl;

    d.showData();

    Child c;
    c.accessProtected();

    return 0;
}
