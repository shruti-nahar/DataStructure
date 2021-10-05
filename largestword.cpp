/*input:-20
         Do or dying
output:- 
         Maximum length of word is 5
         dying
description: The task is too find the Maximum length word from the sentence
date: 04-10-2021
Author name: Shruti Nahar*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int st=0,maxst=0;
    int currlen=0,maxlen=0;
    while(1)
    {
        if(arr[i]=='\0' || arr[i]==' ')
        {
            if(currlen > maxlen)
            {
                maxlen=currlen;
                maxst=st;
            }
            currlen=0;
            st=i+1;
        }
        else
           {
               currlen++;
           }
          
    if(arr[i]=='\0')
        break;
    i++;
    }
    cout<<"Maximum length of word is "<<maxlen<<"\n";
    for(int i=0;i<maxlen;i++)
    {
        cout<<arr[i+maxst];
    }
}