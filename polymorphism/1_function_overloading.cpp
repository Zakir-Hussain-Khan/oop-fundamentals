#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math obj;

    cout << obj.add(2, 3) << endl;      
    cout << obj.add(2.5f, 3.1f) << endl;  
    cout << obj.add(1, 2, 3) << endl;   

    return 0;
}
