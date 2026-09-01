
#include <iostream>
using namespace std;

int opern(int a, int b)
{
    return a*b;
}

float opern(int a, float b)
{
    return a + b;
}

float opern(float a, float b)
{
    return a - b;
}

int opern(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int opern(int *a, int *b)
{
    if(*a>*b)
    return *a;
    else
    return *b;
}

int main()
{
    int a = 100, b = 200;
    float x = 4.5, y = 2.5;

    int arr[] = {101, 202, 303, 404};

    cout << "Two integers = "
         <<opern(a, b) << endl;

    cout << "Integer + float = "
         << opern(a, x) << endl;

    cout << "Two floats = "
         << opern(x, y) << endl;

    cout << "Array total = "
         << opern(arr, 4) << endl;

    cout << "Two pointers = "
         << opern(&a, &b) << endl;

    return 0;
}