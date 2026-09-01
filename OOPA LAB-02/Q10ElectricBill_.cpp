
#include <iostream>
using namespace std;

class ElectricBill
{
    private:
        int customerNumber;
        char customerName[50];
        float unitsConsumed;
        float billAmount;

    public:
        void input()
        {
            cout<<"Enter Customer ID, Name and Units Consumed: ";
            cin>>customerNumber>>customerName>>unitsConsumed;
        }
        void calculateBill()
        {
            if(unitsConsumed <= 100)
                billAmount = unitsConsumed *5;
            else if(unitsConsumed >= 100 && unitsConsumed <= 200)
                billAmount = (100 *5) + ((unitsConsumed - 100) * 7);
            else 
                billAmount = (100 * 5) + (100 * 7) + ((unitsConsumed - 200) * 10);
        }
        void display()
        {
            cout<<"\nCustomer ID: "<<customerNumber<<"\nCustomer Name: "<<customerName<<"\nUnits Consumed: "<<unitsConsumed<<"\nBill Amount: "<<billAmount<<"\n"<<endl;
        }
};
int main()
{
    ElectricBill e;
    e.input();
    e.calculateBill();
    e.display();

    return 0;
}