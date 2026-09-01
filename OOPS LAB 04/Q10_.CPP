
#include <iostream>
using namespace std;

class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    bool powerStatus;

public:
    void input()
    {
        cout << "Enter Device Name: ";
        cin >> deviceName;

        cout << "Enter Device Type: ";
        cin >> deviceType;

        cout << "Enter Power Status : ";
        cin >> powerStatus;
    }

    friend class HomeController;
};

class HomeController
{
public:
    void displayDeviceInfo(SmartDevice d)
    {
        cout << "\nDevice Name: " << d.deviceName << endl;
        cout << "Device Type: " << d.deviceType << endl;
    }

    void turnOn(SmartDevice &d)
    {
        d.powerStatus = true;
    }

    void turnOff(SmartDevice &d)
    {
        d.powerStatus = false;
    }

    void displayPowerStatus(SmartDevice d)
    {
        if(d.powerStatus)
            cout << "Power Status: ON" << endl;
        else
            cout << "Power Status: OFF" << endl;
    }
};

int main()
{
    SmartDevice d;
    HomeController h;

    d.input();

    h.displayDeviceInfo(d);

    h.turnOn(d);
    h.displayPowerStatus(d);

    h.turnOff(d);
    h.displayPowerStatus(d);

    return 0;
}