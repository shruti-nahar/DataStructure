#include<iostream>
using namespace std;
void sort012(int arr[],int n)
{
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 0:
                  cnt0++;
                  break;
            case 1:
                  cnt1++;
                  break;
            case 2:
                  cnt2++;
                  break;
        }
    }
    int i=0;
    while(cnt0>0)
    {
        arr[i]=0;
        i++;
        cnt0--;
    }
     while(cnt1>0)
    {
        arr[i]=1;
        i++;
        cnt1--;
    }
     while(cnt2>0)
    {
        arr[i]=2;
        i++;
        cnt2--;
    }
    cout<<"After Sorting 0s,1s,2s without using sorting algorithm ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,0,1,2,2,1,0,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
}
