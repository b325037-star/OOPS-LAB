
#include <iostream>
using namespace std;

int count(int n)
{
    int digits = 0;

    if (n == 0)
        return 1;

    while (n != 0)
    {
        n = n / 10;
        digits++;
    }

    return digits;
}

int count(int arr[], int n)
{
    return n;
}

int count(char arr[], int n, char ch)
{
    int occurrences = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ch)
            occurrences++;
    }

    return occurrences;
}

int main()
{
    int num = 16545;

    int arr[] = {100, 200, 300, 400, 500};

    char ch[] = {'S', 'H', 'I', 'V', 'A' ,'A'};

    cout << "Number of digits = " << count(num) << endl;

    cout << "Number of elements = " << count(arr, 5) << endl;

    cout << "Number of 'a' = " << count(ch, 5, 'a') << endl;

    return 0;
}