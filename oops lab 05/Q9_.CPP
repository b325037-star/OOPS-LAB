
#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int maximum(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
}

int maximum(int *arr, int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int a = 200;
    int b = 100;

    cout << "Maximum of two integers = "
         << maximum(a, b) << endl;

    cout << "Maximum using pointers = "
         << maximum(&a, &b) << endl;

    int arr[] = {50, 60, 70, 80, 90};

    cout << "Maximum in array = "
         << maximum(arr, 5) << endl;

    return 0;
}