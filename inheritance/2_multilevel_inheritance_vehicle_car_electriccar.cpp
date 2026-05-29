#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void setVehicle(string b) {
        brand = b;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
protected:
    int speed;

public:
    void setCar(int s) {
        speed = s;
    }

    void displayCar() {
        displayVehicle();
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class ElectricCar : public Car {
private:
    int battery;

public:
    void setElectricCar(int b) {
        battery = b;
    }

    void displayElectricCar() {
        displayCar(); 
        cout << "Battery: " << battery << "%" << endl;
    }
};

int main() {
    ElectricCar e;

    e.setVehicle("Tesla");
    e.setCar(120);
    e.setElectricCar(85);
    
    e.displayElectricCar();

    return 0;
}
