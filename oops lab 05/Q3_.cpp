
#include <iostream>
using namespace std;

int total(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

float total(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int total(int arr[], int size, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int a[100], n;
    float b[100], m;
    int k;

    
    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Total of integer array = " << total(a, n) << endl;


 
    cout << "\nEnter size of float array: ";
    cin >> m;

    cout << "Enter elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    cout << "Total of float array = " << total(b, m) << endl;


    
    cout << "\nEnter number of elements to consider: ";
    cin >> k;

    cout << "Total of first " << k << " elements = "
         << total(a, n, k) << endl;

    return 0;
}