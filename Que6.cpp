#include<iostream>
using namespace std;
void halfword (string s)
{
    int l=s.length();
    int x=l/2;
    int y=l;
    string p="";
    while(x>0 && y>l/2)
    {
        p+=s[x-1];
        x--;
       p+=s[y-1];
       y--;
    }
    if(y>l/2)
    {
        p+=s[y-1];
        y--;
    }
    cout<<p;
}
int main()
{
    string s="sunshine";
    halfword(s);
}