#include<iostream>
using namespace std;
void reverseword(string s1,string s2)
{
    int count=0;
    if(s1.length()==s2.length())
    {
       for(int i=0;i<s1.length();i++)
       {
           for(int j=0;j<s1.length();j++)
           {
               if(s1[i]==s2[j])
               {
                   count++;
               }
           }
       }
    }
     else
    {
        cout<<"false";
    }
  
    if(count==s1.length())
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }   
   
}
int main()
{
    string s1="shruti";
    string s2="urtish";
    reverseword(s1,s2);
}