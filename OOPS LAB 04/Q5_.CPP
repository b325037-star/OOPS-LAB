
 
 
 
#include <iostream>
using namespace std;
class FoodOrder
{
   int id;
    string item;
    int quantity,price;
   
    public:
    void input()
    {
        cout<<"enter food id:";
        cin>>id;
        cout<<"enter food item:";
        cin>>item;
        cout<<"enter quantity:";
        cin>>quantity;
        cout<<"enter price:";
        cin>>price;

    }
    friend void calculateBill(FoodOrder f);
};
void calculateBill(FoodOrder f)
{
    float totalBill;
    totalBill=f.quantity*f.price;
    cout<<"order id:"<<f.id;
     cout<<"food item:"<<f.item;
      cout<<"quantity:"<<f.quantity;
       cout<<"price:"<<f.price;
        cout<<"total bill:"<<totalBill;

}
int main()
{
    FoodOrder f;
    f.input();
    calculateBill(f);
    return 0;
}