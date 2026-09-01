
#include <iostream>
using namespace std;
class Distance
{
    private:
        float feet;
        float inches;

    public:
        void input()
        {
            cout<<"Enter Feet and Inches: ";
            cin>>feet>>inches;
        }
void add(Distance d1, Distance d2)
        {
            feet = d1.feet + d2.feet;
            inches = d1.inches + d2.inches;

            if(inches >= 12)
            {
                feet += inches / 12;
                inches = (int)inches % 12;
            }
        }


        void display()
        {
            cout<<"Total Distance="<<feet<<" Feet "<<inches<<" Inches"<<endl;
        }
};

int main()
{
    Distance d1, d2, d3;
    cout<<"Enter First Distance:"<<endl;
    d1.input();
    cout<<"Enter Second Distance:"<<endl;
    d2.input();
    d3.add(d1, d2);
    d3.display();
    return 0;
}