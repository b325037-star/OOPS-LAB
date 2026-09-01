#include <iostream>
using namespace std;
class Diary
{
    private:
    string OwnerName;
    int NumberOfEntries;
string LastEntry;

public:
 void input()
 {
    cout<<"Enter owner name:";
    cin>>OwnerName;
    cout<<"Enter number of entries:";
    cin>>NumberOfEntries;
    cout<<"Enter last entry:";
    cin>>LastEntry;

 }
  friend void displayDiary(Diary d);
};
void displayDiary(Diary d)
{
cout<<"Owner name :"<<d.OwnerName;
cout<<"\nNumber of entries :"<<d.NumberOfEntries;
cout<<"\nLast entry :"<<d.LastEntry;

}
int main()
{
    Diary d;
    d.input();
    displayDiary(d);
    return 0;

}