
#include <iostream>
using namespace std;

class Employee
{
    private:
        int id;
        char name[50];
        float salary;

    public:
        void input()
        {
            cout<<"Enter ID, Name and Salary: ";
            cin>>id>>name>>salary;
        }

        void display()
        {
            cout<<"\nID: "<<id;
            cout<<"\nName: "<<name;
            cout<<"\nSalary: "<<salary;
        }
};
int main()
{
    int n;
    cout<<"Enter number of employees:";
    cin>>n;
    Employee *e = new Employee[n];
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter details for employee "<<i+1<<":\n";
        e[i].input();
    }
    for(int i=0; i<n; i++)
    {
        cout<<"\nDetails for employee "<<i+1<<":\n";
        e[i].display();
    }
    delete[] e;
    return 0;
}