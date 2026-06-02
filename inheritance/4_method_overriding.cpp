#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() { 
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {  
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape s;
    Circle c;
    Rectangle r;

    s.draw();
    c.draw();
    r.draw();

    return 0;
}
