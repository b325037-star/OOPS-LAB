
#include <iostream>
using namespace std;

int modify(int x, int value)
{
    return x + value;
}

float modify(float x, float value)
{
    return x + value;
}

void modify(int *x, int value)
{
    *x = *x + value;
}

int main()
{
    int a = 10;
    float b = 5.5;
    int c = 20;

    cout << "Integer before = " << a << endl;
    a = modify(a, 5);
    cout << "Integer after = " << a << endl;

    cout << "\nFloat before = " << b << endl;
    b = modify(b, 2.5);
    cout << "Float after = " << b << endl;

    cout << "\nPointer integer before = " << c << endl;
    modify(&c, 10);
    cout << "Pointer integer after = " << c << endl;

    return 0;
}