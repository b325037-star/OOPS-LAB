
#include <iostream>
using namespace std;

class student
{
    private:
        int rollno;
        char name[50];
        int subjects;
        float *marks;
        
        public:
        void input()
        {
            cout<<"Enter Roll Number, Name and Number of Subjects: ";
            cin>>rollno>>name>>subjects;
            marks = new float[subjects];
            cout<<"Enter Marks for "<<subjects<<" subjects: ";
            for(int i=0; i<subjects; i++)
                cin>>marks[i];
        }
void display()
        {
            float total = 0;
            for(int i=0; i<subjects; i++)
            total += marks[i];
            float average = total / subjects;
            cout<<"\nRoll Number: "<<rollno;
            cout<<"\nName: "<<name;
            cout<<"\nAverage Marks: "<<average;
            cout<<"\nTotal Marks: "<<total;
        }
};
int main()
{
    student *s = new student;
    s.input();
    s.display();
    delete s;
    return 0;
}