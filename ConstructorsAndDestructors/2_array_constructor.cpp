#include <iostream>
using namespace std;

class Numbers {
private:
    int arr[5];

public:
    Numbers(int a[]) {
        for (int i = 0; i < 5; i++) {
            arr[i] = a[i];
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int values[5] = {10, 20, 30, 40, 50};

    Numbers obj(values);
    obj.display();

    return 0;
}
