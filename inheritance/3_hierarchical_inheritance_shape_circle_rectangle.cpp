#include <iostream>
using namespace std;

class Shape {
protected:
    string color;

public:
    void setColor(string c) {
        color = c;
    }

    void displayColor() {
        cout << "Color: " << color << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    void setCircle(float r) {
        radius = r;
    }

    void displayCircle() {
        displayColor();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    void setRectangle(float l, float w) {
        length = l;
        width = w;
    }

    void displayRectangle() {
        displayColor();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << length * width << endl;
    }
};

// Main function
int main() {
    Circle c;
    Rectangle r;

    c.setColor("Red");
    c.setCircle(5);
    c.displayCircle();

    cout << endl;

    r.setColor("Blue");
    r.setRectangle(4, 6);
    r.displayRectangle();

    return 0;
}
