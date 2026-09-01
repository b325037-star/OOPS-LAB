
#include <iostream>
using namespace std;
class Employee
{
    private:
    int id;
    char name[50];
    float basicSalary;
    float *earnings;
    int month;

    public:
    void input()
    {
        cout<<"Enter Employee ID, Name, Basic Salary and Month: ";
        cin>>id>>name>>basicSalary>>month;

        earnings=new float[month];
        cout<<"Enter Earnings for "<<month<<" months: ";
        for(int i=0;i<month;i++)
        {
            cout<<"Month "<<i+1<<": ";
            cin>>earnings[i];
        }
    }
    void display()
    {
        float total=0;
        int highestMonth=0;
        for(int i=0;i<month;i++)
        {
            total+=earnings[i];
            if(earnings[i]>earnings[highestMonth])
                highestMonth=i;
        }
        float average=total/month;
        cout<<"\nTotal Earnings: "<<total;
        cout<<"\nEmployee ID: "<<id;
        cout<<"\nEmployee Name: "<<name;
        cout<<"\nBasic Salary: "<<basicSalary;
        cout<<"\nEarnings for "<<month<<" months: ";
        cout<<"\nAverage Earnings: "<<average;
        cout<<"\nHighest Earnings Month: "<<highestMonth+1;
        
        }
    };
    int main()
    {
        Employee e;
        e.input();
        e.display();
        return 0;
    }