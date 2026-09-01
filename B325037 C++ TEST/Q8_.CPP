#include <iostream>
using namespace std;

void NEWScores(int *ptr, int n)
{
    for(int i = 0; i < n; i++)
    {
        *ptr = *ptr + 10;
        ptr++;
    }
}

int main()
{
    int n;

    cout << "Enter number of players: ";
    cin >> n;

    int scores[n];

    cout << "Enter scores: ";
    for(int i = 0; i < n; i++)
        cin >> scores[i];

    cout << "Before update: ";
    for(int i = 0; i < n; i++)
        cout << scores[i] << " ";

    NEWScores(scores, n);

    cout << "\nAfter update: ";
    for(int i = 0; i < n; i++)
        cout << scores[i] << " ";

    return 0;
}
















