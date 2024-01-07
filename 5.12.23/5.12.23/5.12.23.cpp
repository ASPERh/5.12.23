#include <iostream>
#include <string>

using namespace std;

class Smartphone {
private:
    string brand;
    string model;
    double screenSize;
    int batteryLife;
    int storageCapacity;

public:
    void makeCall() {
    }

    void sendMessage() {
    }

    void takePhoto() {
    }

    void checkBatteryStatus() {
    }

    void installApp() {
    }

    void KickPen(Pen) {
    }
};

class Cat {
private:
    string name;
    int age;
    string color;
    string breed;
    bool isHungry;

public:
    void feed() {
    }

    void play() {
    }

    void sleep() {
    }

    void groom() {
    }

    void makeSound() {
    }
    
    void DropRemoteControl(RemoteControl) {
    }
};

class Pen {
private:
    string color;
    string brand;
    bool isBallpoint;
    double inkLevel;
    bool isCapPresent;

public:
    void write() {
    }

    void changeColor() {
    }

    void refillInk() {
    }

    void click() {
    }

    void checkCap() {
    }
    
    void writeOnPhone(Smartphone) {
    }

    void writeOnCoin(Coin) {
    }
};

class RemoteControl {
private:
    string brand;
    int numOfButtons;
    bool hasBattery;
    bool isProgrammable;
    string compatibleDevices;

public:
    void powerOn() {
    }

    void powerOff() {
    }

    void changeChannel() {
    }

    void adjustVolume() {
    }

    void programButton() {
    }
};

class Coin {
private:
    int value;
    string countryOfOrigin;
    int yearOfMint;
    string material;
    bool isRare;

public:
    void flip() {
    }

    void inspect() {
    }

    void clean() {
    }

    void store() {
    }

    void evaluate() {
    }

    void PressingRemoteControl(RemoteControl) {
    }
};

int main() {
    Smartphone myPhone;
    Cat myCat;
    Pen myPen;
    RemoteControl myRemote;
    Coin myCoin;

    myPen.writeOnPhone(myPhone);
    myCat.DropRemoteControl(myRemote);
    myPen.writeOnCoin(myCoin);
    myCoin.PressingRemoteControl(myRemote);
    myPhone.KickPen(myPen);

    return 0;
}