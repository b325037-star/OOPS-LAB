#include <iostream>
using namespace std;

class LibraryBook
{
    private:
        int bookID,Days;
        char title[50];
        char name[50];
        float fine;

    public:
        void input()
        {
            cout<<"Enter Book ID, Title, Name and Days: ";
            cin>>bookID>>title>>name>>Days;
        }
        void calculateFine()
        {
            if(Days>15)
            {
                fine=(Days-15)*2;
            }
            else
            {
                fine=0;
            }
        }

        void display()
        {
            cout<<"\nBook ID: "<<bookID<<"\nTitle: "<<title<<"\nName: "<<name<<"\nDays: "<<Days<<"\n"<<endl;
            cout<<"\nFine: "<<fine<<"\n"<<endl;
        }
};
int main()
{
    LibraryBook b;
    b.input();
    b.calculateFine();
    b.display();

    return 0;
}