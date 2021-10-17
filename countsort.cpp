#include<iostream>
using namespace std;
void countsort(int arr[],int n)
{
    int k=arr[0];
    for(int i=0;i<n;i++)
    {
       k= max(k,arr[i]);
    }
    int cnt[20]={0};
    for(int i=0;i<n;i++)
    {
        cnt[arr[i]]++;
    }
    for(int i=1;i<n;i++)
    {

        cnt[i]+=cnt[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i++)
    {
        output[--cnt[arr[i]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
      cout<<"After Count Sort ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,2,1,3,1,5,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    countsort(arr,n);
}
