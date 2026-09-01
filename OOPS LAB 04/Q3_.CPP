
#include <iostream>
using namespace std;
class ParkingSlot
{
    int Slotnumber;
    string vehiclenumber;
    bool occupancystatus;
    public:
    void input()
    {
        cout<<"enter slot number:";
        cin>>Slotnumber;
        cout<<"enter vehicle number:";
        cin>>vehiclenumber;
        cout<<"enter occupancy status:";
        cin>>occupancystatus;
    }
    friend void checkSlot(ParkingSlot p);
};
void checkSlot(ParkingSlot p)
{
    cout<<"\nslot number :"<<p.Slotnumber;
    cout<<"\nvehicle number :"<<p.vehiclenumber;
    

    if(p.occupancystatus==0)
    cout<<"\noccupied";
    else
    cout<<"\nAvailable";
}
int main()
{
    ParkingSlot p;
    p.input();
    checkSlot(p);
    return 0;
}