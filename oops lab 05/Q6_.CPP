
#include <iostream>
using namespace std;

void display(int x)
{
    cout << "Integer = " << x << endl;
}

void display(float x)
{
    cout << "Float = " << x << endl;
}

void display(char x)
{
    cout << "Character = " << x << endl;
}

void display(int arr[], int n)
{
    cout << "Integer array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void display(char arr[], int n)
{
    cout << "Character array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int a = 37;
    float b = 2.12;
    char c = 'S';

    int arr[] = {37, 38, 39, 40};
    char ch[] = {'S', 'H', 'I', 'V' ,'A'};

    display(a);
    display(b);
    display(c);
    display(arr, 4);
    display(ch, 5);

    return 0;
}