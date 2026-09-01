
#include <iostream>
using namespace std;

class student
{
    private:
        int roll;
        char name[50];
        float marks;

        public:
        void input()
        {
            cin.ignore();
            cout<<"Enter Roll No, Name and Marks: ";
            cin>>roll>>name>>marks;
        }
        void display()
        {
            cout<<"\n"<<roll<<"\n"<<name<<"\n"<<marks<<"\n"<<endl;
        }
};
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}