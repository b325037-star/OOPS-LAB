
#include <iostream>
using namespace std;
class employee{
    protected:
    string name;
    float basicSalary;
    public:
employee(string n,float s){
    name=n;
    basicSalary=s;
}
};
class developer : public employee {
    protected :
    int experience;
    public:
    developer(string n, float s, int e):employee(n,s){
        experience=e;
    }
    float experienceBonus()
    {
        return 0.05*basicSalary*experience;
    }
    
};
class SeniorDeveloper : public 
developer{
    float projectBonus;
    public:
    SeniorDeveloper(string n,float s,int e,float p):developer(n,s,e){
        projectBonus=p;
    }
    void displaySalary()
    {
        float totalSalary=basicSalary+experienceBonus()+projectBonus;
        cout<<"name : "<<name<<endl;
        cout<<"Total Salary of Senior Developer: "<<totalSalary<<endl;

    }
};
int main()
{
    SeniorDeveloper sd("John Doe", 50000, 5, 10000);
    sd.displaySalary();
    return 0;
}