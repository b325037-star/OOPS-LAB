
#include <iostream>
using namespace std;

int main()
{
    int *n = new int;
    cout<<"Enter a number: ";
    cin >> *n;
        cout<<"the number is:"<<*n<<endl;
    delete n;
    return 0;
}