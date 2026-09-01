
        #include <iostream>
using namespace std;

int main()
{
    int arr[6];

    cout << "Enter 6 book IDs: ";
    for(int i = 0; i < 6; i++)
        cin >> arr[i];

    int *ptr = arr;

    cout << "Book IDs and Addresses:\n";

    for(int i = 0; i < 6; i++)
    {
        cout << "Book ID: " << *ptr;
        cout << "  Address: " << ptr << endl;
  
              ptr++;
    }

    return 0;
}
