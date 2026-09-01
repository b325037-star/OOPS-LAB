
#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int search(char arr[], int size, char key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int search(int arr[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[100];
    char charr[100];

    int n, key;
    char ch;

    
    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter integer to search: ";
    cin >> key;

    int pos = search(arr, n, key);

    if (pos != -1)
        cout << "Integer found at position " << pos << endl;
    else
        cout << "Integer not found" << endl;


    
    cout << "\nEnter size of character array: ";
    cin >> n;

    cout << "Enter characters: ";
    for (int i = 0; i < n; i++)
    {
        cin >> charr[i];
    }

    cout << "Enter character to search: ";
    cin >> ch;

    pos = search(charr, n, ch);

    if (pos != -1)
        cout << "Character found at position " << pos << endl;
    else
        cout << "Character not found" << endl;


    
    int start, end;

    cout << "\nEnter starting index: ";
    cin >> start;

    cout << "Enter ending index: ";
    cin >> end;

    cout << "Enter integer to search: ";
    cin >> key;

    pos = search(arr, start, end, key);

    if (pos != -1)
        cout << "Integer found at position " << pos << endl;
    else
        cout << "Integer not found in this range" << endl;

    return 0;
}