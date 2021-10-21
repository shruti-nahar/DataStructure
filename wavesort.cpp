#include<iostream>
#include <algorithm>
using namespace std;
void wavesort(int arr[],int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(arr[i]>arr[i-1])
        {
          swap(arr[i],arr[i-1]);   
        }
        else if(arr[i]>arr[i+1] && i<=n-2)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    cout<<"After the wave sort ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={3,5,6,8,9,10,15,67,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    wavesort(arr,n);
}