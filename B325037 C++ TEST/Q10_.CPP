
#include <iostream>
using namespace std;

int main()
{
    int n, ID;

    cout << "Enter number of students: ";
    cin >> n;

    int *ids = new int[n];

    cout << "Enter student IDs: ";

    for(int i = 0; i < n; i++)
        cin >> *(ids + i);

    cout << "Enter ID to search: ";
    cin >> ID;

    int *ptr = ids;
    
int position;
    for(int i = 0; i < n; i++)
    {
        if(*ptr == ID)
        {
            position = i;
            break;
        }

        ptr++;
    }

    if(position != -1)
        cout << "ID found at position: " << position << endl;
    else
        cout << "ID not found." << endl;

    delete[] ids;

    return 0;
}