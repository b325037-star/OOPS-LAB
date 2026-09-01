
#include <iostream>
using namespace std;

class Rectangle
{
    private:
        float length;
        float breadth;

    public:
        void input()
        {
            cout<<"Enter Length and Breadth:";
            cin>>length>>breadth;
        
        }

        float Area()
        {
            return length * breadth;
        }

        float Perimeter()
        {
            return 2 * (length + breadth);
        }
        void display()
        {
            cout<<"Area: "<<Area();
            cout<<"\nPerimeter: "<<Perimeter();
        }
};

int main()
{
    Rectangle r;
    r.input();
    r.display();
    return 0;
}