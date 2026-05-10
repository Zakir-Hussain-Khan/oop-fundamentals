#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float basicSalary;
    float bonus;

public:
    Employee(string n, float salary, float b) {
        name = n;
        basicSalary = salary;
        bonus = b;
    }
    
    float calculateSalary() {
        return basicSalary + bonus;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee emp1("Zakir", 50000, 5000);
    emp1.display();

    return 0;
}
