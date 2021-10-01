/*input:- --
output:- 
size is 4
Capcity is 4
Empty or not 0
Display First element 10
Display Last element 40
Element at 2 index

description: Implementation of vector in STL
date: 01-10-2021
Author name: Shruti Nahar*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
  cout<<"\nsize is "<<v.size();
  cout<<"\nCapcity is "<<v.capacity();
  cout<<"\nEmpty or not "<<v.empty();
  cout<<"\nDisplay First element "<<v.front();
  cout<<"\nDisplay Last element "<<v.back();
  cout<<"\nElement at 2 index "<<v.at(20);
  cout<<"before pop"<<endl;
  for(int i:v) {
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();

  cout<<"after pop"<<endl;
  for(int i:v) {
    cout<<i<<" ";
  }
}
