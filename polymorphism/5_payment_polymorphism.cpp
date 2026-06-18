#include <iostream>
using namespace std;


class Payment {
public:
    virtual void pay() {
        cout << "Processing generic payment..." << endl;
    }
};


class CreditCard : public Payment {
public:
    void pay() {
        cout << "Payment done using Credit Card" << endl;
    }
};

class PayPal : public Payment {
public:
    void pay() {
        cout << "Payment done using PayPal" << endl;
    }
};

class Cash : public Payment {
public:
    void pay() {
        cout << "Payment done using Cash" << endl;
    }
};

int main() {
    Payment* p;

    CreditCard c;
    PayPal pp;
    Cash ca;

    p = &c;
    p->pay();

    p = &pp;
    p->pay();   

    p = &ca;
    p->pay();   
    
    return 0;

}
