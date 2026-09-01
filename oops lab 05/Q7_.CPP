
#include <iostream>
using namespace std;

int compare(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

float compare(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}

bool compare(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main()
{
    int a = 37, b = 100;
    float x = 1.5, y = 1.5;

    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {40, 30, 20, 10};

    cout << "Larger integer = " << compare(a, b) << endl;

    cout << "Larger float = " << compare(x, y) << endl;

    if (compare(arr1, arr2, 4))
        cout << "Arrays are identical" << endl;
    else
        cout << "Arrays are not identical" << endl;

    return 0;
}