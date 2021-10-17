#include<iostream>
#include <set>
using namespace std;
int main()
{
    int a[]={10,20,30,20};
    int n=sizeof(a)/sizeof(a[0]);
    int b[]={30,40,50};
      int m=sizeof(b)/sizeof(b[0]);
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    for(auto i:s)
    {
        cout<<i<<" ";
    }
}
