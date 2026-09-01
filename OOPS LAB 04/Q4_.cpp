
#include <iostream>
using namespace std;
class Song
{
    string Songname;
    string Artistname;
    float duration;
    public:
    void input()
    {
        cout<<"enter song name:";
        cin>>Songname;
        cout<<"enter Artist name:";
        cin>>Artistname;
        cout<<"enter duration:";
        cin>>duration;
    }
    friend void compareSongs(Song s1,Song s2);
};
void compareSongs(Song s1,Song s2)
{
    if(s1.duration<s2.duration)
    cout<<s1.Songname<<" is longer";
    else if(s1.duration>s2.duration)
    cout<<s2.Songname<<"is longer";
    else
    cout<<"both song have same duration";
}
int main()
{
    Song s1,s2;
    cout<<"Enter details of song 1\n";
    s1.input();
     cout<<"Enter details of song 2\n";
    s2.input();
    cout<<"Results:";
    compareSongs( s1, s2);
    return 0;
}