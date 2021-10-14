#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s="98673284";
    sort(s.begin(),s.end(),greater<int>());
    cout<<"Largest Numeric in the string is "<<s[0];
}