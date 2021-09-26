#include<iostream>
using namespace std;
bool reversestr(string s1,string s2)
{
    int len=s1.length();
    if(s1.length()!=s2.length())
    {
        return false;
    }

        for(int i=0;i<len;i++)
        {
            if(s1[i]==s2[len-i-1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    return false;
}
string getwords(string s[],int n)
{
     for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(reversestr(s[i],s[j]))
            {
               return s[i];
            }
           
        }
    }
    return "-1";
}
int main()
{
    string s[]={"geeks","for","skeeg"};
    int n=s->length();
   cout<<getwords(s,n);
}