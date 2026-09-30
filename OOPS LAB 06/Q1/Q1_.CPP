#include <iostream>
using namespace std;
class Distance {
    int feet;
    int inches;
    public:
    Distance(int f=0, int i=0) {
        feet = f;
        inches = i;
    }
    Distance operator+(Distance d)
    {
        feet = feet + d.feet;
        inches = inches + d.inches;

        if(inches>=12)
        {
            feet=feet+inches/12;
            inches=inches%12;
        }
return Distance(feet, inches);
    }
        void display() {
            cout << feet << " feet " << inches << " inches" << endl;
        }
    };
int main() {
    Distance d1(5, 8);
    Distance d2(3, 11);

    Distance d3 = d1 + d2;

    cout << "D1 + D2 = ";
    d3.display();

    return 0;
}