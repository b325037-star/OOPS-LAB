
#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum=0,avg;
    cout<<"Enter number of elements: ";
    cin>>n;
    float *arr = new float[n];
    cout<<"Enter Element :"<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    avg = sum / n;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
    delete[] arr;
    return 0;
}