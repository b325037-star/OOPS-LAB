
#include <iostream>
using namespace std;

void calculate(int a, int b)
{
    cout << "Sum of 2 integers = " << a + b << endl;
}
void calculate(int a, int b, int c)
{
    cout << "Sum of 3 integers = " << a + b + c << endl;
}
void calculate(float a, float b)
{
    cout << "Sum of 2 floats = " << a + b << endl;
}
int main()
{
    int a, b, c;
    float x, y;
    cout << "Enter 2 integers: ";
    cin >> a >> b;
    calculate(a, b);
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;
    calculate(a, b, c);
    cout << "Enter 2 float values: ";
    cin >> x >> y;
    calculate(x, y);
    return 0;
}