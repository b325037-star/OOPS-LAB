
#include <iostream>
using namespace std;

class Product
{
    private:
        int id;
        char name[50];
        float price, quantity, total;

    public:
        void input()
        {
            cout<<"Enter ID, Name, Price and Quantity: ";
            cin>>id>>name>>price>>quantity;
        }
void sell()
        {
            int  sold;
            cout<<"Enter quantity to sell: ";
            cin>>sold;

            if(sold <= quantity)
            {
                quantity -= sold;
                cout<<"Sale successful!"<<endl;
            }
            else
            {
                cout<<"Insufficient stock!"<<endl;
            }
        }


        void calculate()
        {
            total = price * quantity;
        }

        void display()
        {
            cout<<"\n"<<id<<"\n"<<name<<"\n"<<price<<"\n"<<quantity<<"\n"<<total<<endl;
        }
};

int main()
{
    Product p;
    p.input();
    p.calculate();
    p.display();

    return 0;
}