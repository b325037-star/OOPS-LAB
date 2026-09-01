
#include <iostream>
using namespace std;
class StudentResult
{
    private:
        int roll,total;
        char name[50];
        float marks,percentage;
        char grade;

    public:
        void input()
        {
            cout<<"Enter Roll No,name: ";
            cin>>roll>>name;
            total=0;
            cout<<"Enter marks in 5 subjects: ";
            for(int i=0;i<5;i++)
            {
                cin>>marks;
                total+=marks;
            }
        }
            void calculate()
            {
            percentage=(total/500.0)*100;
            if(percentage>=90)
                grade='A';
            else if(percentage>=80)
                grade='B';
            else if(percentage>=70)
                grade='C';
                else if(percentage>=60)
                grade='D';
                else
                grade='F';
            
        }
        void display()
        {
            cout<<"\nROLL: "<<roll<<"\nNAME: "<<name<<"\nTOTAL: "<<total<<"\nPERCENTAGE: "<<percentage<<"\nGRADE: "<<grade<<"\n"<<endl;
        }
};
int main()
{
    StudentResult s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}