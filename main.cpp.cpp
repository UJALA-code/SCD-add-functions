#include <iostream>

using namespace std;

class Door {
private:
    bool isopen;
    bool islocked;

public:
    Door() : isopen(false), islocked(false) {}

    void opendoor() {
        if (!islocked) {
            if (!isopen) {
                cout << "The door is now open." << endl;
                isopen = true;
            } else {
                cout << "The door is already open." << endl;
            }
        } else {
            cout << "Cannot open the door. It is locked." << endl;
        }
    }

    void closedoor() {
        if (isopen) {
            cout << "The door is now closed." << endl;
            isopen = false;
        } else {
            cout << "The door is already closed." << endl;
        }
    }

    void lockdoor() {
        if (!islocked) {
            cout << "The door is now locked." << endl;
            islocked = true;
        } else {
            cout << "The door is already locked." << endl;
        }
    }

    void unlockdoor() {
        if (islocked) {
            cout << "The door is now unlocked." << endl;
            islocked = false;
        } else {
            cout << "The door is already unlocked." << endl;
        }
    }

    bool isdooropen() const {
        return isopen;
    }

    bool isdoorlocked() const {
        return islocked;
    }
};

int main() {
    cout << "Hello World" << endl;

    // You can create an instance of the Door class and use its methods here.

    return 0;
}
