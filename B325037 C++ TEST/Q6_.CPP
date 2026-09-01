#include <iostream>
using namespace std;

void Highest(float *ptr, int n)
{
    float highest = *ptr;

    for(int i = 1; i < n; i++)
    {
        ptr++;

        if(*ptr > highest)
            highest = *ptr;
    }

    cout << "Highest price: " << highest << endl;
}

int main()
{
    float price[7];

    cout << "Enter prices of 7 products: ";

    for(int i = 0; i < 7; i++)
        cin >> price[i];

    Highest(price, 7);

    return 0;
}