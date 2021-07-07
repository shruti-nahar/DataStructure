//////////////////////////////////
/*Input:Enter the number of memory  to be allocated 3
Enter the elements:
2
7
9
*Output:Elements are
2
7
9
Prime no is 2
Prime no is 7
Count of Prime no is 2
*Description:Use of Malloc (Dynamic Memory Allocation ) to Find Count Prime number
*Date: 7-July-2021
*Author:Shruti Nahar*/
////////////////////////////////////
#include<iostream>
#include <math.h>
using namespace std;
#include<stdlib.h>
int main()
{
    int n,c=0,flag=0;
    int *ptr,temp,i,j;
    int p,a,per,r,ans;
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
       for(j=2;j<*(ptr+i)/2;j++)
       {
           ans=*(ptr+i)%j;
           if(ans==0)
           {
              flag=1;
           }
       }
       if(flag==0)
       {
           cout<<"\nPrime no is "<<*(ptr+i);
           c++ ;
       }
       ans=0;
       flag=0;
    }
  cout<<"\nCount of Prime no is "<<c; 
   
}

