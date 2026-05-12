#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    bool isRunning;

public:
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        isRunning = false;
    }


    void start() {
        if (!isRunning) {
            isRunning = true;
            cout << "Car started." << endl;
        } else {
            cout << "Car is already running." << endl;
        }
    }

    void stop() {
        if (isRunning) {
            isRunning = false;
            cout << "Car stopped." << endl;
        } else {
            cout << "Car is already stopped." << endl;
        }
    }


    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Status: " << (isRunning ? "Running" : "Stopped") << endl;
    }
};

int main() {
    Car c1("Toyota", "Corolla", 2020);

    c1.displayInfo();
    cout << endl;

    c1.start();
    c1.displayInfo();
    cout << endl;

    c1.stop();
    c1.displayInfo();
    return 0;
}
