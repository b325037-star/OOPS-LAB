
#include <iostream>
using namespace std;

int main()
{
    int parcels, increase;
    
    cout << "Enter number of parcels: ";
    cin >> parcels;

    int *ptr = &parcels;

    cout << "Number of parcels: " << *ptr << endl;

    cout << "Enter value to increase: ";
    cin >> increase;

    *ptr = *ptr + increase;

    cout << "Updated number of parcels: " << *ptr << endl;

    return 0;
}



