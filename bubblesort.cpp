#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
           if(arr[j]>arr[j+1])
           {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
           }
        }
    }
    cout<<"After sorting \n ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={10,30,45,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
}