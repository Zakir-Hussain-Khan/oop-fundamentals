#include <iostream>
using namespace std;

class Test {
private:
    static int count; 
public:
    Test() {
        count++;
        cout << "Object created. Total objects: " << count << endl;
    }

    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }
};

int Test::count = 0;

int main() {
    Test t1;
    Test t2;
    Test t3;

    Test::showCount();

    return 0;
}
