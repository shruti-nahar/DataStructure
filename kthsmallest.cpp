#include <iostream>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k)
    {
        for(int i=1;i<r;i++)
        {
           for(int j=0;j<r-i;j++)
           {
           if(arr[j]>arr[j+1])
           {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
        }
    }
    for(int i=0;i<r;i++)
    {
        cout<<arr[i]<<" ";
    }
    return arr[k-1];
    }
    int main()
    {
      int k;
      cout<<"Enter the Kth  index ";
      cin>>k;
      int arr[]={10,20,2,3,30};
      cout<<"\n"<<kthSmallest(arr,0,sizeof(arr)/sizeof(arr[0]),k);
    }
