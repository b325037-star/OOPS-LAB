#include <iostream>
using namespace std;

int main()
{
    float CurrBalance, Addamt, deduct;

    cout << "Enter current balance: ";
    cin >> CurrBalance;

    float *ptr = &CurrBalance;


    cout << "Current balance: " << *ptr << endl;

    cout << "Enter amount to add: ";
    cin >> Addamt;
    *ptr = *ptr + Addamt;

    cout << "Enter amount to deduct: ";
    cin >> deduct;
    *ptr = *ptr - deduct;

    cout << "Final balance: " << *ptr << endl;

    return 0;
}