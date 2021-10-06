/*input:-string s = "zyxbcd"
output:- YES
description: check if the given string is rverse bitonic string or not
date: 05-10-2021
Author name: Shruti Nahar*/

#include<iostream>
using namespace std;
int reverseBitonic(string s)
{
    int j,i;
    for( i=1;i<s.size();i++)
    {
        if(s[i]<s[i-1])
        {
            continue;
        }
        if(s[i]>s[i-1])
        {
            break;
        }
    }
    if (i == s.size() - 1)
        return 1;
    for( j=i+1;j<s.size();j++)
    {
        if(s[j]>s[j+1])
        {
            continue;
        }
        if(s[j]<s[j+1])
        {
            break;
        }
    }
    i = j;
    if(i!=s.size())
    {
        return 0;
    }
    return 1;
    }
    int main()
    {
        string s = "zyxbcd";
 
    (reverseBitonic(s) == 1)
        ? cout << "YES"
        : cout << "NO";
    }