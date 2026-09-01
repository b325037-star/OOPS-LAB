
#include <iostream>
using namespace std;

class student
{
    private:
        int rollno;
        char name[50];
        float marks;

    public:
        void input()
        {
            cout<<"Enter Roll Number, Name and Marks: ";
            cin>>rollno>>name>>marks;
        }

        void display()
        {
            cout<<"\nRoll Number: "<<rollno;
            cout<<"\nName: "<<name;
            cout<<"\nMarks: "<<marks;
        }
};
int main()
{
    student *s = new student;
    s->input();
    s->display();
    delete s;
    return 0;
}