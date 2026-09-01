
#include <iostream>
using namespace std;
class Mobile
{
    int batteryPercentage;
    string brand;
    string model;
    public:
    void input()
    {
        cout<<"enter brand";
        cin>>brand;
        cout<<"enter model";
        cin>>model;
        cout<<"enter battery percentage";
        cin>>batteryPercentage;
    }
    friend void checkBattery(Mobile m);
};
void checkBattery(Mobile m)
{
    cout<<"\nBrand :"<<m.brand;
    cout<<"\nmodel :"<<m.model;
    cout<<"\nbattery percentage:"<<m.batteryPercentage;

    if(m.batteryPercentage<20)
    cout<<"battery Low";
    else
    cout<<"Battery Normal";
}
int main()
{
    Mobile m;
    m.input();
    checkBattery(m);
    return 0;
}