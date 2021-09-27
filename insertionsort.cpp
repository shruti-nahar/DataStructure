#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=current;
    }
    cout<<"\nAfter Sorting ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={8,7,39,30,54};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    
}