
#include <iostream>
using namespace std;
class Employee
{
    private:
        int id;
        char name[50];
        float basic,hra,da,gross;

    public:
        void input()
        {
            cout<<"Enter ID, Name and Salary: ";
            cin>>id>>name>>basic;
        }
void calculate()
        {
            hra=0.2*basic;
            da=0.1*basic;
            gross=basic+hra+da;
        }

        void display()
        {
            cout<<"\n"<<id<<"\n"<<name<<"\n";
            
            cout<<"\nbasic salary:"<<"\n"<<basic;
            cout<<"\nHRA:"<<"\n"<<hra;
            cout<<"\nDA:"<<"\n"<<da;
            cout<<"\nGross Salary:"<<"\n"<<gross;
        }
};
int main()
{
    Employee e;
    e.input();
    e.calculate();
    e.display();

    return 0;
}