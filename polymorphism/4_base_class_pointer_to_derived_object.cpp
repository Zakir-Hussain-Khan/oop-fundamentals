#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};
//  agar base class ka pointer derived class  ko point kare to function jo ha wo sirf base class ka hi call ho skta ha (late binding)    to get rid of it we use keyword: virtual
int main() {
    Animal* a;  

    Dog d;  

    a = &d;

    a->sound();

    return 0;
}
