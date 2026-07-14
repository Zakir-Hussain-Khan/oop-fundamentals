#include <iostream>
using namespace std;

class ATM {
public:
    virtual void withdraw(double amount) = 0;
};

class HBLATM : public ATM {
private:
    double balance = 10000; 
public:
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdraw Successful!" << endl;
            cout << "Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }
};

int main() {
    ATM* atm;

    HBLATM user1;

    atm = &user1;

    atm->withdraw(4000);

    return 0;
}
