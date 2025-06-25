#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the size of array: ";
cin>>n;

int arr[n];
cout<<"Enter array elements: ";
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
int count=0;
for (int i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
    count++;
    }
}

cout<<"Even number count is: "<<count;
}
