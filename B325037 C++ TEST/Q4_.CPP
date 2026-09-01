#include <iostream>
using namespace std;

int main()
{
    int seats[8];
    int position, UpdatedSeat;

    cout << "Enter 8 seat numbers: ";
    for(int i = 0; i < 8; i++)
        cin >> seats[i];

    cout << "Before update: ";
    for(int i = 0; i < 8; i++)
        cout << seats[i] << " ";

    cout << "\nEnter position to update: ";
    cin >> position;

    cout << "Enter Updatedseat number: ";
    cin >> UpdatedSeat;

    *(seats + position) = UpdatedSeat;

    cout << "After update: ";
    for(int i = 0; i < 8; i++)
        cout << seats[i] << " ";

    return 0;
}






