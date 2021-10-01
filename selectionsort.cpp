/*input:- arr[]={10,30,45,7,8,9}
output:-  After sorting   
          7 8 9 10 30 45 
description: Implementation of selection sort
date: 01-10-2021
Author name: Shruti Nahar*/
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"After sort";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<arr[i];
    }
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,size);
}
