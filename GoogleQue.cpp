/*input:- 7
          1 5 3 4 3 5 6
output:- 2
description:The task is to find the minimum index of the repeatedly occuring number
date: 28-09-2021
Author name: Shruti Nahar*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int minidx=INT_MAX;
    const  int n=1000;
    int indx[n];
    cout<<"Enter the elements \n ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        indx[i]=-1;
    }
    for(int i=0;i<5;i++)
    {
        if(indx[arr[i]]!=-1)
        {
            minidx=min(indx[arr[i]],minidx);
        }
        else{
            indx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX)
     {
         return 0;
     }
     else{
         cout<<"Minimum index of the repeatedly occuring number: "<<minidx+1;
     }

    
}