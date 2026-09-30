#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time operator+(Time t) {
        hours = hours + t.hours;
        minutes = minutes + t.minutes;

        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }

        return Time(hours, minutes);
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes";
    }
};

int main() {
    Time t1(4, 45);
    Time t2(2, 30);

    Time t3 = t1 + t2;

    cout << "Result: ";
    t3.display();

    return 0;
}