/*input:- 7 sum=12
          2 3 5 67 1 3 8
output:-  starting index is  5 ending index is  7
description:The task is to find the continous subarray which adds to give the given number
date: 28-09-2021
Author name: Shruti Nahar*/
#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0;
    int sum=12;
    int n=7;
    int curr=0;
    int arr[n];
    int st=-1,en=-1;
    cout<<"Enter the elements \n ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(j<n && curr+arr[j]<=sum)
    {
        curr=curr+arr[j];
        j++;
    }
    if(curr==sum)
    { 
        cout<<"starting index is "<<i+1<<" ending index is "<<j;
        return 0;
    }
    while(j<n)
    {
        curr=curr+arr[j];
        while(curr>sum)
        {
            curr=curr-arr[i];
            i++;
        }
        if(curr==sum)
        {
           st=i+1;
           en=j+1;
           break;
        }
        j++;
    }
     cout<<"starting index is  "<<st<<" ending index is  "<<en;

}