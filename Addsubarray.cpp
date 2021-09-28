/*input:-ar[]={1,2,2,4,5};
output:- 
1
3
5
9
14
2
4
8
13
2
6
11
4
9
5
description:Implementation of addition of sub-array
date: 28-09-2021
Author name: Shruti Nahar*/
#include<iostream>
using namespace std;
void addsubarr(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<"\n";
        }
    }
}
int main()
{
    int ar[]={1,2,2,4,5};
    int n=sizeof(ar)/sizeof(ar[0]);
    addsubarr(ar,n);
}