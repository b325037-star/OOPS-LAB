
#include <iostream>
using namespace std;

void updateVisitors(int *count)
{
    int newVisitors;

    cout << "Enter newly arrived visitors: ";
    cin >> newVisitors;

    *count = *count + newVisitors;
}

int main()
{
    int visitors;

    cout << "Enter number of visitor: ";
    cin >> visitors;

    cout << "Before aarival number of visitor is : " << visitors << endl;

    updateVisitors(&visitors);

    cout << "After arrival number of visitor are: " << visitors << endl;

    return 0;
}