
#include <iostream>
using namespace std;

class product
{
    private:
    int id,quantity;
    char name[50];
    float price;

    public:
    void input()
    {
        cout<<"Enter Product ID, Name, Quantity and Price: ";
        cin>>id>>name>>quantity>>price;
    }
    void display()
    {
        cout<<"\nproduct id:"<<id;
        cout<<"\nproduct name:"<<name;
        cout<<"\nproduct quantity:"<<quantity;
        cout<<"\nproduct price:"<<price;
        cout<<"\ntotal price:"<<quantity*price;
    }
float cost()
{
    return quantity * price;
}
};
int main()
{
    int n;
    float total=0;
    cout<<"Enter number of products:";
    cin>>n;
    product *p = new product[n];
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter details for product "<<i+1<<":\n";
        p[i].input();
    }
    for(int i=0; i<n; i++)
    {
        p[i].display();
        total += p[i].cost();
    }
    cout<<"\nTotal cost of all products: "<<total;
    delete[] p;
    return 0;
}