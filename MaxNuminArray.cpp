

#include <iostream>
using namespace std;
int main()
{
     int n = 5;
    int arr[n]={4,5,6,9,2};
                   
    int max=0;
    for(int i=0; i<n;i++)
    {
        
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    
    cout<<max;
}
