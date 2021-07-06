//////////////////////////////////
/*Input:enter the number of elements 5
enter the elements in array
20
10
30
50
40
*Output:
Elements are
20
10
30
50
40
After Sorting
10
20
30
40
50
*Description:Use of Malloc (Dynamic Memory Allocation) to Sort the elements
*Date: 6-July-2021
*Author:Shruti Nahar*/
////////////////////////////////////
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
    int n;
    int *ptr,temp,i,j;
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
        for(j=0;j<n;j++)
        {
          if(*(ptr+i)<*(ptr+j))
          {
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
          }
        }
    }
    cout<<"\nAfter Sorting ";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<*(ptr+i);
    }
}
