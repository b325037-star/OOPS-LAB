
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows and columns: ";
    cin>>m>>n;
    int **arr = new int*[m];
    for(int i=0;i<m;i++)
    arr[i] = new int[n];
    cout<<"Enter Element :"<<m*n<<" elements: ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    cout<<"\nMatrix";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int i=0;i<m;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}