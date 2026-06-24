#include <iostream>
using namespace std;

class Camera {
public:
    virtual void takePicture() = 0;
};

class MusicPlayer {
public:
    virtual void playMusic() = 0;
};

class SmartPhone : public Camera, public MusicPlayer {
public:
    void takePicture() {
        cout << "Taking a picture..." << endl;
    }

    void playMusic() {
        cout << "Playing music..." << endl;
    }
};

int main() {
    SmartPhone phone;

    phone.takePicture();
    phone.playMusic();

    return 0;
}
