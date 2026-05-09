#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            length = 0;
            width = 0;
            cout << "Invalid dimensions!" << endl;
        }
    }

    double area() {
        return length * width;
    }

    double perimeter() {
        return 2 * (length + width);
    }

};

int main() {
    Rectangle r(10, 5);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
