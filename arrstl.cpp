/*input:- 
output:- 
description: Implementation of array in STL
date: 01-10-2021
Author name: Shruti Nahar*/

#include<iostream>
#include<stdlib.h>
#include<array>
using namespace std;
int main()
{
    array<int,4> a={6,7,3,5};
    int s=a.size();
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<"\n";
    }
    cout<<"Display the element at particular index "<<a.at(2)<<"\n";
    cout<<"Check whether the array is empty or not "<<a.empty()<<"\n";
    cout<<"Display the First element of array "<<a.front()<<"\n";
    cout<<"Display the last element of array "<<a.back()<<"\n";
    cout<<"Display the size of array "<<a.size()<<"\n";
    

}