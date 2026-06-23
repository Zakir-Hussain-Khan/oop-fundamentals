#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(double amount) = 0; 
};

class CreditCard : public Payment {
public:
    void pay(double amount) {
        cout << "Paid Rs. " << amount << " using Credit Card." << endl;
    }
};

class JazzCash : public Payment {
public:
    void pay(double amount) {
        cout << "Paid Rs. " << amount << " using JazzCash." << endl;
    }
};

class EasyPaisa : public Payment {
public:
    void pay(double amount) {
        cout << "Paid Rs. " << amount << " using EasyPaisa." << endl;
    }
};

int main() {
    Payment* p1;

    CreditCard cc;
    JazzCash jc;
    EasyPaisa ep;

    p1 = &cc;
    p1->pay(5000);

    p1 = &jc;
    p1->pay(2500);

    p1 = &ep;
    p1->pay(1500);

    return 0;
}
