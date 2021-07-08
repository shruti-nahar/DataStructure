//////////////////////////////////
/*Input:Enter the number of memory  to be allocated 3
Enter the elements: 6
28
1
*Output:-Elements are
6
28
1
Perfect number is 6
Perfect number is 28
Count of Perfect no is 2
*Description:Use of Malloc (Dynamic Memory Allocation ) to Find Count of perfect  number
*Date: 8-July-2021
*Author:Shruti Nahar*/
////////////////////////////////////
#include<iostream>
#include <math.h>
using namespace std;
#include<stdlib.h>
int main()
{
    int n,c,flag=0;
    int *ptr,temp,i,j;
    int p,a,per,r,ans=0;
    cout<<"Enter the number of memory  to be allocated ";
    cin>>n;
    ptr=(int*)malloc(sizeof(int)*n);
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"Elements are ";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<*(ptr+i);
    }
    for(i=0;i<n;i++)
    {
    p=*(ptr+i);
    temp=*(ptr+i);
     for(j=1;j<temp;j++)
     {
         if(temp%j==0)
         {
             ans=ans+j;
         }
     }
    if(p==ans)
    {
      cout<<"\nPerfect number is "<<ans; 
      flag++;
    }
    ans=0;
    }
  cout<<"\nCount of Perfect no is "<<flag; 
   
}

